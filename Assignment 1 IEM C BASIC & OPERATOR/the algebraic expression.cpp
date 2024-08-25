//Write a C program to evaluate the algebraic expression (ax+b)/(ax-b)
#include<stdio.h>
int main()
{
	int a,b,x;
	float result;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter the number:");
	scanf("%d",&b);
	printf("enter the number:");
	scanf("%d",&x);
	result=(a*x+b)/(a*x-b);
	printf("the algebraic expression result is:%f",result);
}
