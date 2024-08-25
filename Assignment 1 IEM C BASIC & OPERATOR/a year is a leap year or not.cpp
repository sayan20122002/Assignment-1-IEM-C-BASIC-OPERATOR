//Write a C program to check whether a year is a leap year or not.
#include<stdio.h>
int main()
{
	int year,i;
	printf("enter the year:");
	scanf("%d",&year);
	if(year%100==0)
	{
		if(year%400==0)
		{
			printf("this year is leap year:%d",year);
		}
		else
		{
			printf("this year is not leap year:%d",year);
		}
	}
	if(year%4==0)
	{
		printf("this year is leap year:%d",year);
	}
	else
	{
		printf("this year is not leap year:%d",year);
	}
}
