#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
	char a;
	printf("Enter the operation: ");
	scanf("%c",&a);
	int x,y;
	printf("Enter the numbers: ");
	scanf("%d %d",&x,&y);
	if(a=='+')
	{
		int c=add(x,y);
		printf("Addition of two numbers %d\n",c);
	}
	else if (a=='-')
	{
		int c=sub(x,y);
		printf("Subtraction of two numbers: %d\n",c);
	}
	else if(a=='*')
	{
		int c=mul(x,y);
		printf("Multiplication of two numbers: %d\n",c);
	}
	else if(a=='/')
	{
		int c=div(x,y);
		printf("Division of two numbers: %d\n",c);
	}
}
