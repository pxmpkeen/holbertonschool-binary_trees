#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node to the left
 * @parent: parent node
 * @value: value that node carries
 *
 * Return: node or NULL on error
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	if (parent != NULL)
		temp = (*parent).left;
	else
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	(*node).n = value;
	(*node).parent = parent;
	(*node).left = NULL, (*node).right = NULL;

	if (temp != NULL)
	{
		(*temp).parent = node;
		(*node).left = temp;
		(*temp).left = NULL, (*temp).right = NULL;
	}
	(*parent).left = node;

	return (node);
}
