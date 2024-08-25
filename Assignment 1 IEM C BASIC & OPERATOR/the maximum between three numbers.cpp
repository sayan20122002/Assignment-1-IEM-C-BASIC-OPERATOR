//Write a C program to find the maximum between three numbers.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("enter the third number:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("first number is bigger:%d",a);
		}
		else
		{
			printf("third number is bigger:%d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("second number is bigger:%d",c);
		}
		else
		{
			printf("third number is bigger:%d",c);
		}
	}
}
