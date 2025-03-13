#include "main.h"

int Infix_Postfix_conversion(char *Infix_exp, char *postfix_exp, Stack_t *stk)
{
	int j =0;
	for(int i = 0 ; i < Infix_exp[i] != '\0' ; i++ )
	{
		char ch = Infix_exp[i];
		if(isalnum(ch))
		{
			postfix_exp[j++]=ch;
		}
		else
		{
			if(stk->top == -1)
			{
				push(stk,ch);
			}
			else if(ch == '(')
			{
				push(stk,ch);
			}
			else if(ch == ')')
			{
				while (!is_stack_empty(stk) && peek(stk) != '(')
				{
					postfix_exp[j++] = pop(stk);
				}
				pop(stk);

			}
			else
			{
				while (!is_stack_empty(stk) && priority(peek(stk)) >= priority(ch)) 
				{
					postfix_exp[j++] = pop(stk);
				}
				push(stk,ch);
			
			}
		}
	}
	while(!is_stack_empty(stk))
	{
		postfix_exp[j++]= pop(stk);
	}
	postfix_exp[j]= '\0';
	return 1;
}
