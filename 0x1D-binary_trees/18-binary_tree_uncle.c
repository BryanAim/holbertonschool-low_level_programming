#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
  *binary_tree_uncle - finds the uncle of a node
  *@node: is a pointer to the root of the tree
  *Return: a pointer to the uncle node
  */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
