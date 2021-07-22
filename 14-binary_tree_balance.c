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

		rlenght = tree->right ? binary_tree_height(tree->right) + 1 : 1;
		llenght = tree->left ? binary_tree_height(tree->left) + 1 : 1;
		return ((llenght > rlenght) ? llenght : rlenght);
	}
	return (0);
}

/**
 * binary_tree_balance - returns balance of given tree
 * @tree: given tree
 * Return:balance of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
