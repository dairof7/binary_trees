#include "binary_trees.h"

/**
 * binary_tree_delete - delete a tree
 * @tree: address of the root
 * Return: a pointer to the new node, or NULL on failure
 */


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left != NULL)
			binary_tree_delete(tree->left);
		if (tree->right != NULL)
			binary_tree_delete(tree->right);
		free(tree);
	}
}
