//Write a C program to find the sum and average of three numbers.
#include<stdio.h>
int main()
{
	int a1,a2,a3,sum=0;
	float avg=0.0;
	printf("enter the number:");
	scanf("%d",&a1);
	printf("enter the number:");
	scanf("%d",&a2);
	printf("enter the number:");
	scanf("%d",&a3);
	sum=a1+a2+a3;
	avg=sum/3;
	printf("sum of the rhree number:%d\n",sum);
	printf("average of the three number:%.2f",avg);
}
