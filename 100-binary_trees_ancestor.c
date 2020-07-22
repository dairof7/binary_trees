#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: Depth or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	else
		depth = 0;
	return (depth);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: pointer to the common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	int first_depth, second_depth;

	if (first == NULL || second == NULL)
		return (NULL);

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	for (; first_depth < second_depth; second_depth--)
		second = second->parent;
	for (; second_depth < first_depth; first_depth--)
		first = first->parent;
	if (first == NULL || second == NULL)
		return (NULL);
	while (first != second)
	{
		if (first == NULL || second == NULL)
			return (NULL);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
