#include "binary_trees.h"

/**
 * binary_tree_node - create binary_tree_node
 * @parent: pointer to parent node
 * @value: value for new node
 * Return: pointer to new node, else NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode = malloc(sizeof(binary_tree_t));

	if (nnode == NULL)
		return (NULL);
	nnode->n = value;
	nnode->parent = parent;
	nnode->left = NULL;
	nnode->right = NULL;


	return (nnode);
}
