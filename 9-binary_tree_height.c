#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (height(tree) - 1);
}

/**
 * height - Extra, betty style need this
 * @tree: tree
 * Return: height of tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
