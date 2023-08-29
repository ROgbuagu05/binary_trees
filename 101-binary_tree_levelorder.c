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

/**
 * level_line - print each level
 * @tree: A tree to print
 * @level: A level to print
 * @func: A print function
 */
void level_line(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
	{
		func(tree->n);
	}
	else if (level > 1)
	{
		level_line(tree->left, level - 1, func);
		level_line(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 * Retrun: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	height = binary_tree_height(tree);

	for (i = 1; i <= height; i++)
	{
		level_line(tree, i, func);
	}
}
