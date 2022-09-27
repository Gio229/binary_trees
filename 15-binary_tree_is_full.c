#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree
 * Return: 0 for false else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (right == 1 && left == 1)
		return (1);

	return (0);
}
