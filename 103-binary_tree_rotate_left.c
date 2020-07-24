#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree.
 * @tree: pointer to the root node of the tree to rotate.
 * Return: pointer to the new root.
 */


binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t temp;

	if (tree == NULL)
		return (NULL);
	if (tree->right == NULL)
		return (tree);
	temp = *tree;


	if (tree->right)
	{
		tree->right = tree->right->left;
		tree->parent = temp.right;
		temp.right->parent = temp.parent;
		if (temp.right->left)
			temp.right->left->parent = tree;
		temp.right->left = tree;
	}

	return (tree->parent);
}
