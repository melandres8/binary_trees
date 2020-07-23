#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find
 * Function must return a pointer to the sibling node.
 * Return: If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *current = node;

	if (current == NULL || current->parent == NULL)
		return (NULL);
	if (current == current->parent->right)
		return (current->parent->left);
	else
		return (current->parent->right);
}
