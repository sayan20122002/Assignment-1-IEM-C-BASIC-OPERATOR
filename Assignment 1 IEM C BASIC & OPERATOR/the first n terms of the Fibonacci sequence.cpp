//Write a C program to generate the first n terms of the Fibonacci sequence.
#include<stdio.h>
int main()
{
	int n,a=1,b=0,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(sum<=n)
	{
		printf("%d\t",sum);
		sum=a+b;
		a=b;
		b=sum;
	}
}
