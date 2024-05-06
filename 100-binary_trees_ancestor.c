#include "binary_trees.h"

#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: Depth of the node. Returns 0 if tree is NULL.
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
	size_t firstDepth = binary_tree_depth(first);
	size_t secondDepth = binary_tree_depth(second);

	if (firstDepth > secondDepth && second != first->parent)
		return (second->parent);
	else if (secondDepth > firstDepth && first != second->parent)
		return (first->parent);
	else if (first == second->parent)
		return (second->parent);
	else if (second == first->parent)
		return (first->parent);
	return (first->parent);
}
