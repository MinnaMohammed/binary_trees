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
	size_t left;
	size_t right;
	size_t height;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);

	left = tree->left ? 1 + binary_tree_height(tree->left) : height;
	right = tree->right ? 1 + binary_tree_height(tree->right) : height;

	return (left > right ? left : right);
}
