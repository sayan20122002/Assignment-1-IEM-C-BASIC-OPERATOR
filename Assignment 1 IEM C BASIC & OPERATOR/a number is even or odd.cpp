//Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("this number is even number:%d",n);
	}
	else
	{
		printf("this number is odd number:%d",n);
	}
}
