#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: a pointer to the root node of the tree
 * Return: NULL | addres of the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((node == NULL) || (node->parent == NULL))
		return (NULL);
	if (node->parent->right == NULL || node->parent->left == NULL)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
