#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree
 * @parent: pointer
 * @value: value
 * Return: pointer
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (struct binary_tree_s *)malloc(sizeof(struct binary_tree_s));
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	node->n = value;
	return (node);
}
