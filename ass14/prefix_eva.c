#include "main.h"

int Prefix_Eval(char *Prefix_exp, Stack_t *stk)
{
    int res;
    for(int i = 0 ; i < Prefix_exp[i]!= '\0';i++)
    {
        if(isdigit(Prefix_exp[i]))
        {
            push(stk,Prefix_exp[i]-'0');
        }
        else
        {
            int op1= pop(stk);
            int op2= pop(stk);
            switch(Prefix_exp[i]) 
            {
                case '+' :
                    res= op1+op2;
                    break;
                case '-' :
                    res = op1-op2;
                    break;
                case '*' :
                    res = op1 * op2;
                    break;
                case '/' :
                    res = op1/op2;
                    break;
            }
            push(stk,res);
            
        }
    }
   return pop(stk);
}