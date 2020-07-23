#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	if (!tree->right)
		return (tree);
	tree->parent = tree->right;
	tree->parent->parent = NULL;
	if (!tree->right->left)
	{
		tree->right->left = tree;
		tree->right = NULL;
	}
	else if (tree->right->left)
	{
		tree->right = tree->right->left;
		tree->parent->left = tree;
		tree->right->parent = tree;
	}
	return (tree->parent);
}
