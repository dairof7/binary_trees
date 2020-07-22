#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: a pointer to the node
 * Return: NULL | addres of the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa;

	if (node == NULL)
		return (NULL);

	if (node->parent->parent != NULL)
		grandpa = node->parent->parent;
	else
		return (NULL);

	if ((grandpa->right != NULL) && (grandpa->right != node->parent))
		return (grandpa->right);
	if ((grandpa->left != NULL) && (grandpa->left != node->parent))
		return (grandpa->left);
	return (NULL);
}
