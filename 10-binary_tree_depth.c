#include "binary_trees.h"
/**
  *wiw - measures node count
  *@tree: pointer to the root node of the tree to measure the height.
  *Return: 0
  */

size_t wiw(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);
	depth = wiw(tree->parent) + 1;
	return (depth);
}
/**
  *binary_tree_depth - measures the depth of a node in a binary tree
  *@tree: pointer to the node to measure the depth
  *Return: 0
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (wiw(tree) == 0)
		return (0);
	return (wiw(tree) - 1);
}
