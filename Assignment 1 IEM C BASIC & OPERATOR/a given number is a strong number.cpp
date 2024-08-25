//Write a C program to check if a given number is a strong number.
#include<stdio.h>
int main()
{
	int n,i,fact,sum=0,temp,rem;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		fact=1;
		rem=n%10;
		for(i=rem;i>0;i--)
		{
			fact=fact*i;
		}
		sum+=fact;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("this number is strong number:%d",temp);
	}
	else
	{
		printf("this number is not strong number:%d",temp);
	}
}
