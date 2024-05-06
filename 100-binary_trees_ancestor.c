#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 *
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes.
 *         If no common ancestor was found, your function must return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	size_t depth_first = binary_tree_depth(first);
	size_t depth_second = binary_tree_depth(second);

	/*Move up to the same depth*/
	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}

	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}

	/*Move up until they meet at the same node*/
	while (first && second && first != second)
	{
		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}
