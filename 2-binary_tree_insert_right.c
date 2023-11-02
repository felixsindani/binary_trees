#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node_2 - creates a binary tree node
 * @parent: parent of the node to create
 * @value: value to store in new node
 * Return: ptr to the new node
 */
binary_tree_t *binary_tree_node_2(binary_tree_t *parent, int value)
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

/**
 * binary_tree_insert_right -  function that inserts a node as the right-child of another node
 * @parent: ptr to the node to insert the right-child in
 * @value: value to store in the new node
 * Description: If parent already has a right-child, the new node must take its
 * place and the old right-child must be set as the right-child of the new node
 * Return: ptr to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node_2(parent, value);
	if (right_child == NULL)
		return (NULL);
	right_child->right = parent->right;
	if (right_child->right != NULL)
		right_child->right->parent = right_child;
	parent->right = right_child;
	return (right_child);
}
