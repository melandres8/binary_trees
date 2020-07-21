#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: is the value to store in the new node.
 * Return: return a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;
	return (new);
}
