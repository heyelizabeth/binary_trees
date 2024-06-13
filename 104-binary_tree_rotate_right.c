#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 *
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root, *temp;

	if (tree == NULL)
		return (NULL);

	if (tree->left)
	{
		temp = tree->left->right;
		new_root = tree->left;
		new_root->parent = tree->parent;
		new_root->right = tree;
		tree->parent = new_root;
		tree->left = temp;
		if (temp)
			temp->parent = tree;
		return (new_root);
	}
	return (NULL);
}
