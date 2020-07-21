#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent->right != NULL)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;

	return (node);
}
