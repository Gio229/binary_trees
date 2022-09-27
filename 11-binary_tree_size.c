#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the tree
 * Return: the tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	rightSize = binary_tree_size(tree->right) + 1;
	leftSize = binary_tree_size(tree->left)  +  1;
	return ( rightSize + leftSize);

}
