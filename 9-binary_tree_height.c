#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL)
		{
			left_height = 1 + binary_tree_height(tree->left);
		}
		if (tree->right != NULL)
		{
			right_height = 1 + binary_tree_height(tree->right);
		}
		if (left_height >= right_height)
		{
			return (left_height);
		}
		return (right_height);
	}
}
