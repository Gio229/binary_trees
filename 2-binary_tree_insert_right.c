#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_right - insert node to the right side
 * @parent: the parent
 * @value: the value
 * Return: a new binary tree node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	else
		newNode->right = NULL;

	parent->right = newNode;

	return (newNode);
}
