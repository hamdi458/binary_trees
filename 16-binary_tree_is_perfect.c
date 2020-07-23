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

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 is full or 0 is not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
  *wiw_height - measures node count
  *@tree: pointer to the root node of the tree to measure the height.
  *Return: 0
  */

size_t wiw_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = wiw_height(tree->left);
	right = wiw_height(tree->right);
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
	if (wiw_height(tree) == 0)
		return (0);
	return (wiw_height(tree) - 1);
}

/**
 * tree_perfect - checks if the leaves are at the same level, full and the depth is equal to tree height
 * @tree: a pointer to the root node of the tree to check
 * @tree_height: tree height
 * Return: 1 if perfect, 0 if not
 */

int tree_perfect(const binary_tree_t *tree, int tree_height)
{
	if (!tree->left && !tree->right)
		return (((int)(binary_tree_depth(tree)) == tree_height) ? 1 : 0);
	else
		return (tree_perfect(tree->left, tree_height)
				* tree_perfect(tree->right, tree_height));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_height;

	if (!tree || !binary_tree_is_full(tree))
		return (0);
	tree_height = (int)binary_tree_height(tree);
	return (tree_perfect(tree, tree_height));
}
