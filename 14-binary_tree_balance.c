#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree)
	{
		if (tree->left)
			left = binary_tree_height(tree->left) + 1;
		else
			left = 0;

		if (tree->right)
			right = binary_tree_height(tree->right) + 1;
		else
			right = 0;

		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Measure or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;
	else
		left = 0;
	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;
	else
		right = 0;
	return (left - right);
}
