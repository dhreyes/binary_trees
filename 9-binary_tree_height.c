#include "binary_trees.h"
/**
 * binary_tree_height - returns the height of a given tree
 * @tree: given tree
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree)
	{
		size_t rlenght = 0, llenght = 0;

		rlenght = tree->right ? binary_tree_height(tree->right) + 1 : 0;
		llenght = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		return ((llenght > rlenght) ? llenght : rlenght);
	}
	return (0);
}
