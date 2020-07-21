#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = calloc(1, sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
