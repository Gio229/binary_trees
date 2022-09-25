#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_inorder - function that goes through a binary tree using in-order traversal
 * @tree: root node of the three to traverse
 * @func: function to call for each node
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
