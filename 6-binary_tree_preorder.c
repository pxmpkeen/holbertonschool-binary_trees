#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through tree using pre-order traversal
 * @tree: root of tree
 * @func: function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *temp = tree;

	if (temp == NULL)
		return;
	func((*temp).n);
	binary_tree_preorder((const binary_tree_t *) (*temp).left, func);
	binary_tree_preorder((const binary_tree_t *) (*temp).right, func);
}
