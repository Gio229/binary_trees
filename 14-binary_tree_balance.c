#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree
 * Return: the balance
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	leftHeight = binary_tree_balance(tree->left) + 1;
	rightHeight = binary_tree_balance(tree->right) + 1;

	return (leftHeight - rightHeight);
}
