#include "binary_trees.h"
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	node = (struct binary_tree_s*)malloc(sizeof(struct binary_tree_s));
	if (!node || !parent)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
		parent->right = node;
		return(node);
	}
	parent->right = node;
	return(node);
}
