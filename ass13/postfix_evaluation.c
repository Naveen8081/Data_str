
#include "main.h"

int Postfix_Eval(char *Postfix_exp, Stack_t *stk)
{
 
    //printf("%s\n",Postfix_exp);
    int res;
    for(int i = 0 ; i < Postfix_exp[i]!= '\0';i++)
    {
        if(isdigit(Postfix_exp[i]))
        {
            push(stk,Postfix_exp[i]-'0');
        }
        else
        {
            int op1= pop(stk);
            int op2= pop(stk);
            switch(Postfix_exp[i]) 
            {
                case '+' :
                    res= op2+op1;
                    break;
                case '-' :
                    res = op2-op1;
                    break;
                case '*' :
                    res = op2 * op1;
                    break;
                case '/' :
                    res = op2/op1;
                    break;
            }
            push(stk,res);
            
        }
    }
   return pop(stk);
}