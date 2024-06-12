#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: A pointer to the node to check.
 *
 * Return: If node is NULL, 0. Otherwise, 1.
*/


int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);
	else
		return (0);
}
