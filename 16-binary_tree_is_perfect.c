#include "binary_trees.h"

/**
 * power - Calculates the power of a base to an exponent.
 *
 * @base: The base value.
 * @exponent: The exponent value.
 *
 * Return: The result of base raised to the power of exponent.
 */
size_t power(size_t base, size_t exponent)
{
	size_t result = 1, i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or 0 if @tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, numberOfLeaves;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	height--;
	numberOfLeaves = binary_tree_leaves(tree);

	return (numberOfLeaves == power(2, height));
}
