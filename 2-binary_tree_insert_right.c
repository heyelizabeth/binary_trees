#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as
 * the right-child of another node.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
*/


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_noud;

	if (parent == NULL)
		return (NULL);

	new_noud = malloc(sizeof(binary_tree_t));
	if (new_noud == NULL)
		return (NULL);

	new_noud->n = value;
	new_noud->parent = parent;
	new_noud->left = NULL;
	new_noud->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new_noud;

	parent->right = new_noud;

	return (new_noud);
}
