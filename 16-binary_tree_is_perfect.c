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
 * binary_tree_is_perfect - checks tree to see if perfect
 * @tree: pointer to root node of tree
 * Return: Always 0 (Success), else NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (binary_tree_is_perfect(tree->left) == binary_tree_is_perfect(tree->right));
	return (0);
}
