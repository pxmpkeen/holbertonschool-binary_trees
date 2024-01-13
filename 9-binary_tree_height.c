#include "binary_trees.h"

/**
 * binary_tree_height - calculates height of subtree
 * @tree: root of tree
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL || ((*tree).left == NULL && (*tree).right == NULL))
		return (0);
	else
	{
		lh = binary_tree_height((*tree).left);
		rh = binary_tree_height((*tree).right);

		return (lh > rh ? lh + 1 : rh + 1);
	}
}
