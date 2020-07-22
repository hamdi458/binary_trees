#include "binary_trees.h"
size_t wiw(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return(0);
	depth = wiw(tree->parent) + 1;
	return depth;
}
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (wiw(tree) == 0)
		return (0);
	return (wiw(tree) - 1);
}
