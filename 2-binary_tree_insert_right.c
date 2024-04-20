#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_right - insert a new node as the right
 * child of another node If parent already has a
 * right-child, the new node must take its place,
 * and the old right-child must be set as the
 * right-child of the new node.
 *
 * @parent: address of the parrent node.
 * @value: value of the new node.
 *
 * Return: A pointer to the new node, NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
