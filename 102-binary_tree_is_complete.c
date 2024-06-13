#include "binary_trees.h"
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is complete, 0 otherwise
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *queue[1024];
	int front = 0, back = 0, flag = 0;

	if (!tree)
		return (0);

	queue[back++] = (binary_tree_t *)tree;

	while (front < back)
	{
		binary_tree_t *node = queue[front++];

		if (!node)
			flag = 1;

		else
		{
			if (flag)
				return (0);

			queue[back++] = node->left;
			queue[back++] = node->right;
		}
	}

	return (1);
}
