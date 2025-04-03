#include "tree.h"

int find_height(Tree_t *root)
{
    int res1,res2;
    if(root == NULL)
        return 0; // present node will reached null 
    if(root != NULL) //traverse till null
    {  
        res1 = find_height(root -> left); //traverse till left child
        res2 = find_height(root -> right); // traverse till right child
        if(res1 ==res2) // both reaches 0 add 1
        {
            return res1+1;
        }
        else if(res1 > res2) // if res1 is greater res1 +1
            return res1 + 1;
        else// if res1 is greater res2 +1
            return res2 + 1;
        
    }
}