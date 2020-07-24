#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree.
 * @tree: pointer to the root of the tree.
 * Return: 1 if BST | 0 otherwise.
 */


int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (lower(tree->left, tree->n, 'L') && higher(tree->right, tree->n, 'R'))
		return (1);
	return (0);
}

/**
 * lower - checks if node value is lower than perent value.
 * @tree: pointer to the node.
 * @root_value: value of the root
 * @side: side to eval, must be Left 'L' or right 'R'
 * Return: 1 if lower| 0 otherwise.
 */

int lower(const binary_tree_t *tree, int root_value, char side)
{
	if (tree == NULL)
		return (1);

	if (tree->n >= tree->parent->n)
		return (0);

	if (side == 'L' && tree->n >= root_value)
		return (0);

	if (side == 'R' && tree->n <= root_value)
		return (0);

	if (lower(tree->left, root_value, side) &&
	higher(tree->right, root_value, side))
		return (1);
	else
		return (0);
}

/**
 * higher - checks if node value is higher than perent value.
 * @tree: pointer to the node.
 * @root_value: value of the root
 * @side: side to eval, must be Left 'L' or right 'R'
 * Return: 1 if lower| 0 otherwise.
 */

int higher(const binary_tree_t *tree, int root_value, char side)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= tree->parent->n)
		return (0);

	if (side == 'L' && tree->n >= root_value)
		return (0);

	if (side == 'R' && tree->n <= root_value)
		return (0);

	if (lower(tree->left, root_value, side) &&
	higher(tree->right, root_value, side))
		return (1);
	else
		return (0);
}
