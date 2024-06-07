#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 *@tree: a pointer to the root node of the tree to check
 *
 * Return: 0, if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftFlag, rightFlag;

	if (!tree)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		leftFlag = binary_tree_is_perfect(tree->left);
		rightFlag = binary_tree_is_perfect(tree->right);
		if (leftFlag == 0 || rightFlag == 0)
			return (0);
		else
			return (1);
	}
	return (0);
}
