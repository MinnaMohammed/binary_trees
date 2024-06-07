#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 *@tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: if tree is NULL, return 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int leftFlag, rightFlag;

	if (!tree)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1);

	leftFlag = binary_tree_nodes(tree->left);
	rightFlag = binary_tree_nodes(tree->right);

	return (rightFlag + leftFlag);

}
