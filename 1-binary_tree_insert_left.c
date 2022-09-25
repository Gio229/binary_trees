#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_left - insert node to the left side
 * @parent: the parent
 * @value: the value
 * Return: a new binary tree node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	else
		newNode->left = NULL;

	parent->left = newNode;

	return (newNode);
}
