#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree
 * Return: height | 0
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
 * tree_path - print each node in level-order traversal.
 * @tree: a pointer to the root node of the tree
 * @func: pointer function
 * @curr_level: current level of the tree
 * Return: height | 0
 */
void tree_path(const binary_tree_t *tree, void (*func)(int), size_t curr_level)
{
	if (tree == NULL)
		return;
	if (curr_level == 0)
		func(tree->n);
	else
	{
		tree_path(tree->left, func, curr_level - 1);
		tree_path(tree->right, func, curr_level - 1);
	}
}

/**
 * binary_tree_levelorder - print each node in level-order traversal.
 * @tree: a pointer to the root node of the tree
 * @func: pointer function
 * Return: height | 0
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t current_level, height;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	for (current_level = 0; current_level <= height; current_level++)
		tree_path(tree, func, current_level);
}

