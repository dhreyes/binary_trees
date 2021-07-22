# include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((node != NULL) && (node->left == NULL) && (node->right == NULL));
}
