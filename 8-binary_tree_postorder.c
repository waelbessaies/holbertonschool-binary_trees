#include "binary_trees.h"
/**
* binary_tree_inorder - post-order traversal
*
* @tree:  binary tree
* @func: function
* Return: nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_inorder(tree->left, func);
binary_tree_inorder(tree->right, func);
func(tree->n);
}
