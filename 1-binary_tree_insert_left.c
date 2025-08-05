#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - inserts a node as the left child
 * @parent: pointer to parent node
 * @value: value to store in new node
 * Return: pointer to new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
	return (NULL);
	}
	if (parent->left != NULL)
	{    
	parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}