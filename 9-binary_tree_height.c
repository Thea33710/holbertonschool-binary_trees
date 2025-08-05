#include <stdlib.h>
#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left, right;
    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
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
