#include "main.h"

int Infix_Prefix_conversion(char *Infix_exp, char *Prefix_exp, Stack_t *stk)
{
	int j =0;
	for(int i = 0 ; i < Infix_exp[i] != '\0' ; i++ )
	{
		char ch = Infix_exp[i];
		if(isalnum(ch))
		{
			Prefix_exp[j++]=ch; // if it is operand directly store into postfix array
		}
		else
		{
			if(stk->top == -1) // if it is stack empty push into stack
			{
				push(stk,ch);
			}
			else if(ch == ')')
			{
				push(stk,ch); // if it close paranthahis push into stack
			}
			else if(ch == '(') // if it is open paranthasis till close paranthesis pop into postfix array
			{
				while (!is_stack_empty(stk) && peek(stk) != ')') 
				{
					Prefix_exp[j++] = pop(stk);
				}
				pop(stk); // to discard ')'

			}
			else
			{
				while (!is_stack_empty(stk) && priority(peek(stk)) > priority(ch))  // if available item stack opearator is higher  scaned operator  
				{
					Prefix_exp[j++] = pop(stk);  // pop the stack available opeartor
				}
				push(stk,ch); // and push scanned operator into the stack
			
			}
		}
	}
	while(!is_stack_empty(stk))
	{
		Prefix_exp[j++]= pop(stk); // till end of character reached means pop all the items into the postfix array
	}
	Prefix_exp[j]= '\0'; // storing at last null char
	return 1;
}