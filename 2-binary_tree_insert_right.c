#include "binary_trees.h"
/**
 * binary_tree_insert_right -  inserts a node as the
 * right-child of another node.
 *
 *@parent: a pointer to the parent node of the node to create
 *@value: the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);

	if (!node)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}
