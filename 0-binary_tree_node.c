#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - A function that creates a binary tree node.
 * @parent: A pointer to the parent node to create.
 * @value: The value to put in the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
