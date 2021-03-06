#include "binary_trees.h"
/**
  *binary_tree_size - measures the size of a binary tree
  *@tree:  pointer to the root node of the tree to measure the size
  *Return: size of Binary tree
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right, left;

	if (!tree)
		return (0);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);
	return (right + left + 1);
}
