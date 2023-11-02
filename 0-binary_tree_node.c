#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - fnct that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: ptr to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_created;

	new_node_created = malloc(sizeof(binary_tree_t));
	if (new_node_created == NULL)
		return (NULL);
	new_node_created->parent = parent;
	new_node_created->n = value;
	new_node_created->left = new_node_created->right = NULL;
	return (new_node_created);
}
