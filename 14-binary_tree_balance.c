#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree
 * Return: the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	if (tree->left  != NULL)
		leftHeight = the_binary_tree_height(tree->left) + 1;
	else
		leftHeight = the_binary_tree_height(tree->left);
	
	if (tree->right  != NULL)
                rightHeight = the_binary_tree_height(tree->right) + 1;
        else
                rightHeight = the_binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}

/**
 * the_binary_tree_height - measures the height of a binary tree
 * @tree: the tree
 * Return: the height
 */
int the_binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = the_binary_tree_height(tree->left) + 1;
	right = the_binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);

}
