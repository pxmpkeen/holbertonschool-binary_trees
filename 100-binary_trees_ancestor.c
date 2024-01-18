#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds lowest ancestor of two nodes
 * @first: first node
 * @second: second node
 *
 * Return: node or NULL
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first,
		const binary_tree_t *second
		)
{
	binary_tree_t *node, *temp, *help;

	node = (binary_tree_t *)second;
	temp = (binary_tree_t *)first;

	while (temp != NULL)
	{
		help = node;
		while (help != NULL)
		{
			if (help == temp)
				return (help);
			help = (*help).parent;
		}
		temp = (*temp).parent;
	}
	return (NULL);
}
