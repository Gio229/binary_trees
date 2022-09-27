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
	int left, right, size, pow, i;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	size = binary_tree_size(tree);

	if (size == 1)
		return (1);
	if (left >= 0 && right >= 0 && left == right)
	{
		for (i = 0, pow = 1; i <= left + 1; i++)
                	pow *= 2;

		if (pow - 1 == size)
			return (1);
	}

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

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the tree
 * Return: the tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize, rightSize;

	if (tree == NULL)
		return (0);

	rightSize = binary_tree_size(tree->right) + 1;
	leftSize = binary_tree_size(tree->left);

	return (rightSize + leftSize);

}
