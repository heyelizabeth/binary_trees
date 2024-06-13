#include "binary_trees.h"
/**
 * bst_search - Searches for a value in a Binary Search Tree
 * @tree: Pointer to the root node of the BST
 * @value: Value to search for in the tree
 *
 * Return: Pointer to the node containing the value, or NULL if not found
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (value < tree->n)
		return (bst_search(tree->left, value));
	else if (value > tree->n)
		return (bst_search(tree->right, value));
	else
		return ((bst_t *)tree);
}
