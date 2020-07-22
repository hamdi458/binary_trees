#include "binary_trees.h"
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return 0;
	if (node->right && node->left && !node->parent)
		return (1);
	return (0);

}
