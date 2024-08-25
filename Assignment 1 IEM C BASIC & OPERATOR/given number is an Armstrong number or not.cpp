//Write a C program to check whether a given number is an Armstrong number or not.
#include<stdio.h>
int main()
{
	int n,rem,i,sum=0,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem*rem*rem;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("this numner is armstromg number:%d",temp);
	}
	else
	{
		printf("this numner is not armstromg number:%d",temp);
	}
}
