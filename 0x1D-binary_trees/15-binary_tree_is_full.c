#include "binary_trees.h"

/**
  *binary_tree_is_full - measures if the tree is full
  *@tree: is a pointer to the root of the tree
  *Return: 1 if true, 0 otherwise.
  */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int compare;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_is_full(tree->left);
	right_height = binary_tree_is_full(tree->right);
	if (tree->left)
		left_height = (left_height + 1);
	if (tree->right)
		right_height = (right_height + 1);
	compare = (left_height - right_height);
	if (compare == 0)
		return (1);
	return (0);
}
