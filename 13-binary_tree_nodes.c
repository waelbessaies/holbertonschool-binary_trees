#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes
 * @tree: tree
 * Return: nodes
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
	{
		return (0);
	}
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
