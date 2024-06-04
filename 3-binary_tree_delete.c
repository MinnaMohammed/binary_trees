#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree.
 *
 *@tree: a pointer to the root node of the tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_t *pNode;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	else if (tree->right != NULL)
		binary_tree_delete(tree->right);
	else
	{
		pNode = tree->parent;
		free(tree);
		binary_tree_delete(pNode);
	}

}
