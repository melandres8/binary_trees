#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Your function must return a pointer to the uncle node.
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *current = node;

	if (!current || !current->parent || !current->parent->parent)
		return (NULL);
	if (current->parent == current->parent->parent->right)
		return (current->parent->parent->left);
	else
		return (current->parent->parent->right);
}
