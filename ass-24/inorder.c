#include "tree.h"

/* Function to print the data in in order printing */
int inorder(Tree_t *root)
{
    if(root != NULL)
    {
        inorder(root -> left); // traverse left child
        printf("%d ",root -> data); //print it that data
        inorder(root -> right); // traverse right right
    }
}