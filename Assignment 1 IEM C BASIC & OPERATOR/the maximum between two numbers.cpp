//Write a C program to find the maximum between two numbers.
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("first number is bigger than the second number:%d",a);
	}
	else
	{
		printf("second number is bigger than the first number:%d",b);
	}
}
