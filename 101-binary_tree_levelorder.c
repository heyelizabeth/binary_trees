#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree using
 * level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: void
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *queue[1024];
	int front = 0, back = 0;

	if (!tree || !func)
		return;

	queue[back++] = (binary_tree_t *)tree;

	while (front < back)
	{
		binary_tree_t *node = queue[front++];

		func(node->n);

		if (node->left)
			queue[back++] = node->left;

		if (node->right)
			queue[back++] = node->right;
	}
}
