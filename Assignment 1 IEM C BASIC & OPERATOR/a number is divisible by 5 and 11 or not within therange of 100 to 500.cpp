//Write a C program to check whether a number is divisible by 5 and 11 or not within therange of 100 to 500.
#include<stdio.h>
int main()
{
	int a1,a2,i;
	printf("enter the first number:");
	scanf("%d",&a1);
	printf("enter the first number:");
	scanf("%d",&a2);
	printf("divisible by 5 and 11 or not within therange of 100 to 500");
	for(i=a1;i<=a2;i++)
	{
		if((i%5==0) && (i%11==0))
		{
			printf("%d\t",i);
		}
	}
}
