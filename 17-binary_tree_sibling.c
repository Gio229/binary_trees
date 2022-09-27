#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the node
 * Return: the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL ||
		node->parent->right == NULL)
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
