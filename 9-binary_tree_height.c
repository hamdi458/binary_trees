#include "binary_trees.h"
/**
  *wiw - measures node count
  *@tree: pointer to the root node of the tree to measure the height.
  *Return: 0
  */

size_t wiw(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = wiw(tree->left);
	right = wiw(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
  *binary_tree_height -  measures the height of a binary tree
  *@tree: pointer to the root node of the tree to measure the height.
  *Return: 0
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (wiw(tree) == 0)
		return (0);
	return (wiw(tree) - 1);
}
