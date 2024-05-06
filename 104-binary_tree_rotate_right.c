#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree.
 *
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *newroot;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	newroot = tree->left;
	if (newroot != NULL)
	{
		tree->left = newroot->right;
		if (newroot->right != NULL)
			newroot->right->parent = tree;

		newroot->parent = tree->parent;
		tree->parent = newroot;
		newroot->right = tree;
	}

	return (newroot);
}
