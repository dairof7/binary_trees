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
 * validate_tree - validate a complete binary tree.
 * @tree: a pointer to the root node of the tree
 * @index: index of the root
 * @size: size of the tree
 * Return: 1 | 0
 */

int validate_tree(const binary_tree_t *tree, size_t index, size_t size)
{
	int complete = 0, left, right;

	if (tree == NULL)
		return (1);

	if (index >= size)
		return (0);
	left = validate_tree(tree->left, 2 * index + 1, size);
	right = validate_tree(tree->right, 2 * index + 2, size);
	complete = left * right;
	return (complete);

}

/**
 * binary_tree_is_complete - verify if binary tree is complete.
 * @tree: a pointer to the root node of the tree
 * Return: 1 | 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, index = 0;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	return (validate_tree(tree, index, size));
}
