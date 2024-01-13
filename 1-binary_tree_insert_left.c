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

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (temp != NULL)
	{
		(*temp).parent = node;
		(*node).left = temp;
		(*temp).left = NULL, (*temp).right = NULL;
	}

	return (node);
}
