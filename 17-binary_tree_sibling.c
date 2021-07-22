#include "binary_trees.h"
/**
 * binary_tree_sibling - returns sibling of given node
 * @node:node to check
 * Return: sibling of given node or null 
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
