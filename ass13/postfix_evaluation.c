#include "main.h"

int Postfix_Eval(char *Postfix_exp, Stack_t *stk)
{
 
    //printf("%s\n",Postfix_exp);
    int res;
    for(int i = 0 ; i < Postfix_exp[i]!= '\0';i++)
    {
        if(isdigit(Postfix_exp[i]))
        {
            push(stk,Postfix_exp[i]-'0'); // if it is digit and it is availble on char so change char to int and push into stk
        }
        else
        {
            int op1= pop(stk); // operand 1 store
            int op2= pop(stk);//operand 2 store
            switch(Postfix_exp[i]) // scanned operator is  in the switch based on the operation will do 
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
            push(stk,res); // evaluating two operand and pushinto the stack
            
        }
    }
   return pop(stk);// last pop result stack
}