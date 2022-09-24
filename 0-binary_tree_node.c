#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent
 * @value: the value
 * Return: a new binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t);

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;

	return (newNode);
}
