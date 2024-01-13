#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through tree using post-order traversal
 * @tree: root of tree
 * @func: function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *temp = tree;

	if (temp == NULL)
		return;
	binary_tree_postorder((const binary_tree_t *) (*temp).left, func);
	binary_tree_postorder((const binary_tree_t *) (*temp).right, func);
	if (func != NULL)
		func((*temp).n);
}
