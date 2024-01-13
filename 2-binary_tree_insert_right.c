#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node to the right
 * @parent: parent node
 * @value: value that node carries
 *
 * Return: node or NULL on error
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	if (parent != NULL)
		temp = (*parent).right;
	else
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (temp != NULL)
	{
		(*temp).parent = node;
		(*node).right = temp;
		(*temp).right = NULL, (*temp).right = NULL;
	}

	return (node);
}
