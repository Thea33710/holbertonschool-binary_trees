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
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_r, height_l;

	if (tree == NULL)
	{
		return (0);
	}
	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	return (height_l - height_r);
}
