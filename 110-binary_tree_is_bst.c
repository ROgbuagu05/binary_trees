#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#include "limits.h"
/**
 * is_bst_helper - Checks if a binary tree is a valid Binary Search Tree
 * @tree: Checks if a binary tree is a valid Binary Search Tree
 * @min: Lower bound of nodes to check
 * @max: Upper bound of nodes to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (tree->n < min || tree->n > max)
	{
		return (0);
	}

	return (is_bst_helper(tree->left, min, tree->n - 1) &&
		is_bst_helper(tree->right, max, tree->n + 1));
}
/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
        if (tree == NULL)
        {
                return (0);
        }
        return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
