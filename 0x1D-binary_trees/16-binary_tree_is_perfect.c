#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
  *binary_tree_is_perfect - measures if the tree is perfect
  *@tree: is a pointer to the root of the tree
  *Return: 1 if true, 0 otherwise
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_height = binary_tree_is_perfect(tree->left)
		&& binary_tree_height(tree->left);
	right_height = binary_tree_is_perfect(tree->right)
		&& binary_tree_height(tree->right);
	return (left_height == right_height);
}
