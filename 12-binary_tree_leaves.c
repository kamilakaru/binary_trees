#include "binary_trees.h"

/**
 * binary_tree_leaves - fubnction that counts the leaves
 * @tree: pointer to the root node
 * Return: count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left, right, count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	count = left + right;
	return (count);
}
