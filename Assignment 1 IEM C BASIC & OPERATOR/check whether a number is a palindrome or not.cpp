//Write a C program to check whether a number is a palindrome or not.
#include<stdio.h>
int main()
{
	int n,temp,rev=0,i,rem;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==temp)
	{
		printf("this number is palindrome number:%d",temp);
	}
	else
	{
		printf("this number is not palindrome number:%d",temp);
	}
}
