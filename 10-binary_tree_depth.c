#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * size_t binary_tree_depth - 
 * @tree: measures the depth of a node in a binary tree
 * Return the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent)
		return (0);
	
	return (binary_tree_depth(tree->parent) + 1);
}
