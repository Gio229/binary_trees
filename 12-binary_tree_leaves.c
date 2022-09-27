#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the tree
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right  == NULL && tree->left == NULL)
		livesLeft = binary_tree_leaves(tree->left);
		livesRight = binary_tree_leaves(tree->right)
		return (1 + leavesLeft  + livesRight);
}
