#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect.
 * @tree: pointer to the root node
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);
	return (0);
}

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	else
		return (0);
}
