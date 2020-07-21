#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: address of a node
 * Return: a pointer to the new node, or NULL on failure
 */

int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
