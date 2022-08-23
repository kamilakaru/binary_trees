#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 *
 * Return: pointer to the new node, on failure NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}

	return (node);
}
