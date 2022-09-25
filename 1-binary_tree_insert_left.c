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
	binary_tree_t *oldLeftNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;

	oldLeftNode = parent->left;
	if (oldLeftNode != NULL)
	{
		newNode->left = oldLeftNode;
		oldLeftNode->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
