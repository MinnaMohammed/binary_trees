#include "binary_trees.h"
/**
 * size_t binary_tree_depth - measures the depth of a node in a binary tree
 *
 *@tree:  a pointer to the node to measure the depth
 *
 * Return: if tree is NULL, return 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	while (tree->right == NULL)
	{
		right += 1;
		tree = tree->right;
	}
	while (tree->left == NULL)
	{
		left += 1;
		tree = tree->left;
	}

	return (left > right ? left : right);
}
