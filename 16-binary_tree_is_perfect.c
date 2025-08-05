#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (1 + left);
	else
		return (1 + right);
}

/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: pointer to the root node
 * Return: the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
	{
		return (0);
	}
	i++;
	i += binary_tree_size(tree->left);
	i += binary_tree_size(tree->right);
	return (i);
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if true or 0 if false
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height, nodes;

	if (tree == NULL)
	{
		return (0);
	}
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	nodes = (1 << height) - 1;
	if (size == nodes)
	{
		return (1);
	}
	return (0);
}
