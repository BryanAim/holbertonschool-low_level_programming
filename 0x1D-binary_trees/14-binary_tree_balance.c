#include "binary_trees.h"

/**
  *binary_tree_balance - measures the balance factor of a binary tree
  *@tree: is a pointer to the root of the tree
  *Return: difference in height.
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);
	if (tree->left)
		left_height = (left_height + 1);
	if (tree->right)
		right_height = (right_height + 1);
	return (left_height - right_height);
}
