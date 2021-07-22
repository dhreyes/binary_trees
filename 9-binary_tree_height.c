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
		size_t rlenght, llenght;

		rlenght = tree->right ? binary_tree_height(tree->right) : 0;
		llenght = tree->left ? binary_tree_height(tree->left) : 0;

		if (rlenght > llenght)
			return (rlenght + 1);
		else
			return (llenght + 1);
	}
	return (0);
}
