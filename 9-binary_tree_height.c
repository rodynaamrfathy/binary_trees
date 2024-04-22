#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: size, If tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int level = 0;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	return (level);
}
