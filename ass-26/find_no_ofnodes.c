#include "tree.h"

int total_nodes(Tree_t *root)
{
    int res1,res2;
    if(root == NULL)
        return 0; //reaches null return 0 to previous stack frame
    if(root != NULL)
    {
        res1 = total_nodes(root -> left); // traverse till left child end we collecting res1 variable
        res2 = total_nodes(root -> right);// traverse till right child end we collecting res2 variable
        return res1+res2+1; // return the add value
    }
}