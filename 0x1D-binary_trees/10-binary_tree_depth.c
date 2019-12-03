#include "binary_trees.h"

/**
  *binary_tree_depth - measures the depth of a binary tree
  *@tree: is a pointer to the root of the tree
  *Return: Depth of tree.
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	size_t depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
