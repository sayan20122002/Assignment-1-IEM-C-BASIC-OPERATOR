//Write a C program to check if the given number is a perfect number
#include<stdio.h>
int main()
{
	int n,i,sum=0,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	if(sum==temp)
	{
		printf("this number is perfect number:%d",temp);
	}
	else
	{
		printf("this number is not perfect number:%d",temp);
	}
}
