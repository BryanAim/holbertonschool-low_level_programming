#include "binary_trees.h"
#include "10-binary_tree_depth.c"
/**
 * binary_trees_ancestor - find the lowest common ancestor
 * @first: first node
 * @second: second node
 * Return: pointer to the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t first_depth;
	size_t second_depth;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == NULL)
		return ((binary_tree_t *) first);
	if (second->parent == NULL)
		return ((binary_tree_t *) second);
	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);
	while (first_depth != second_depth)
	{
		if (first_depth > second_depth)
		{
			first_depth--;
			first = first->parent;
		}
		else
		{
			second_depth--;
			second = second->parent;
		}
	}
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *) first);
}
