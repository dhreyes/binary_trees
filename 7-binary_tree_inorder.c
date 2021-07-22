#include "binary_trees.h"
/**
 * binary_tree_postorder - move in tree with in-order traversal
 * @tree: pointer to root node of tree
 * @func: pointer to function to call value in node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	
		binary_tree_inorder(tree->left, func);
		(*func)(tree->n);
		binary_tree_inorder(tree->right, func);
}
