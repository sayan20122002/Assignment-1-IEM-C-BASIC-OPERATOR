//Write a C program to find the sum of individual digits of a given positive integer.
#include<stdio.h>
int main()
{
	long int a,sum=0;
	int rem;
	printf("enter the number:");
	scanf("%ld",&a);
	while(a>0)
	{
		rem=a%10;
		sum+=rem;
		a=a/10;
	}
	printf("the sum of individual digits of a given positive integer:%d",sum);
}
