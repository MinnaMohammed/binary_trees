#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 *@tree: a pointer to the root node of the tree to check
 *
 * Return: if tree is NULL, return 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftFlag, rightFlag;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		leftFlag = binary_tree_is_full(tree->left);
		rightFlag = binary_tree_is_full(tree->right);
		if (leftFlag == 0 || rightFlag == 0)
			return (0);
		else
			return (1);
	}
	return (0);

}
