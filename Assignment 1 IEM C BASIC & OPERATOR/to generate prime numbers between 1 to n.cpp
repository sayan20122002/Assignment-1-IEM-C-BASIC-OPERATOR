//Write a C program to generate prime numbers between 1 to n.
#include<stdio.h>
int main()
{
	int a1,a2,i,y,count;
	printf("enter the first number:");
	scanf("%d",&a1);
	printf("enter the second number:");
	scanf("%d",&a2);
	for(i=a1;i<=a2;i++)
	{
		count=0;
		for(y=1;y<=i;y++)
		{
			if(i%y==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d\t",i);
		}
	}
}
