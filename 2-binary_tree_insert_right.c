# include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as the left child of
 * another node, if child exists, move into new space
 * @parent: pointer to node to insert left child
 * @value: value for new node
 * Return: pointer to new node, else NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode, *temp;

	if (!parent)
		return (NULL);

	nnode = malloc(sizeof(binary_tree_t));
	if (nnode == NULL)
		return (nnode);

	nnode->n = value;
	nnode->parent = parent;
	nnode->left = NULL;

	temp = parent->right;
	parent->right = nnode;
	if (temp)
		temp->parent = nnode;
	nnode->right = temp;

	return (nnode);
}
