#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that creates a binary tree node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node, failure NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}

	return (node);
}
