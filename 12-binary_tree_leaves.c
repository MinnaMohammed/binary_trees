#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 *@tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0, if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left, right, sum;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	sum = left + right;
	return (sum);
}
