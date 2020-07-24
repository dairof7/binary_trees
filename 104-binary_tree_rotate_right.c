#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree.
 * @tree: pointer to the root node of the tree to rotate.
 * Return: pointer to the new root.
 */


binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t temp;

	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL)
		return (tree);
	temp = *tree;


	if (tree->left)
	{
		tree->left = tree->left->right;
		tree->parent = temp.left;
		temp.left->parent = temp.parent;
		if (temp.left->right)
			temp.left->right->parent = tree;
		temp.left->right = tree;
	}

	return (tree->parent);
}
