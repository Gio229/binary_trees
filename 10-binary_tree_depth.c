#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_depth - measures the depth of a node
 * @tree: measures the depth of a node in a binary tree
 * Return: return the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
