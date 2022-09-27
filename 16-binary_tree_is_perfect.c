#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the tree
 * Return: 0 for false else 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int rightHeight, leftHeight;

	if (tree == NULL)
		return (0);

	rightHeight = binary_tree_height(tree->right);
	leftHeight = binary_tree_height(tree->left);

	if (rightHeight == leftHeight)
		return (binary_tree_is_full(tree));

	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);

}
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
