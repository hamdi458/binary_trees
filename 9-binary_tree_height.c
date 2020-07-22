#include "binary_trees.h"
size_t wiw(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = wiw(tree->left);
	right = wiw(tree->right);
	if (left > right)
		return (left +1 );
	else
		return (right+1);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	return(wiw(tree)-1);
}
