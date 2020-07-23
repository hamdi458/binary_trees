#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{

	if (!tree)
		return (NULL);
	if (!tree->left)
		return (tree);
	tree->parent = tree->left;
	tree->parent->parent = NULL;

	if (!tree->left->right)
	{
		tree->parent->right  = tree;
		tree->left = NULL;
	}
	else if (tree->left->right)
	{
		tree->left = tree->left->right;
		tree->parent->right = tree;
		tree->left->parent = tree;
	}
	return (tree->parent);
}
