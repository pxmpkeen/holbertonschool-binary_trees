#include "binary_trees.h"

/**
 * binary_tree_node - creates child node to a given child
 * @parent: parent of new node
 * @value: data that node carries
 *
 * Return: new node or NULL on error
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	(*node).n = value;
	(*node).parent = parent;

	if (parent != NULL)
	{
		if (value < (*parent).n)
			(*parent).left = node;
		else
			(*parent).right = node;
	}

	(*node).left = NULL, (*node).right = NULL;

	return (node);
}
