#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: a pointer to the root node of the tree
 * Return: size | 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}



/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: a pointer to the root node of the tree
 * Return: 1 full | 0 not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}

	if (tree->left && tree->right)
	{
		if ((binary_tree_is_full(tree->right)) && (binary_tree_is_full(tree->left)))
			return (1);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree
 * Return: 1 perfect | 0 not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((binary_tree_is_full(tree->left)) == (binary_tree_is_full(tree->right)))
	{
		if ((binary_tree_size(tree->left)) == (binary_tree_size(tree->right)))
			return (1);
	}
	return (0);
}
