#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 *
 *@tree: a pointer to the root node of the tree to measure the size
 *
 * Return: 0, if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (sizet(tree));
}
/**
 * sizet - measures the size of a binary tree
 *
 *@tree: a pointer to the root node of the tree to measure the size
 *
 * Return: 0, if tree is NULL
*/
size_t sizet(const binary_tree_t *tree)
{
        if (!tree)
                return (0);

	return (1 + sizet(tree->left) + sizet(tree->right));
}
