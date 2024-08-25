//Write a C program to check whether a number is negative, positive, or zero
#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("this number is positive number:%d",a);
	}
	else
	{
		if(a<0)
		{
			printf("this number is negetive number:%d",a);
		}
		else
		{
			printf("this number is zero number:%d",a);
		}
	}
}
