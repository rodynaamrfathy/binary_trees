#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 *
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newroot;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	newroot = tree->right;
	if (newroot != NULL)
	{
		tree->right = newroot->left;
		if (newroot->left != NULL)
			newroot->left->parent = tree;

		newroot->parent = tree->parent;
		tree->parent = newroot;
		newroot->left = tree;
	}

	return (newroot);
}
