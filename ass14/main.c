#include "main.h"


void strrev(char *string)
{
    /* TODO: Write logic for string reverse */
    int len = strlen(string);
    char temp;
    for(int i = 0 ; i< len/2 ;i++)
    {
        temp = string[i];
        string[i] = string[len-1-i];
        string[len-1-i]= temp;
    }
}
int main()
{
	char Infix_exp[50], Prefix_exp[50], ch;
	int choice, result;
	Stack_t stk;
	stk.top = -1;

	printf("Enter the Infix expression : ");
	scanf("%s", Infix_exp);

	strrev(Infix_exp);
	Infix_Prefix_conversion(Infix_exp, Prefix_exp, &stk);
	//printf("PreFix expression : %s\n", Prefix_exp);
	strrev(Prefix_exp);
	printf("PreFix expression : %s\n", Prefix_exp);

	stk.top = -1;

	strrev(Prefix_exp);
	result = Prefix_Eval(Prefix_exp, &stk);
	printf("\nResult : %d\n", result);
	return 0;
}
