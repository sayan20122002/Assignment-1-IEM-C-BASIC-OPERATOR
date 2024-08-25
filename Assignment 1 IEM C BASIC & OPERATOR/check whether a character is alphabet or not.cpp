//Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
#include<stdio.h>
int main()
{
	char n;
	printf("enter the character:");
	scanf("%c",&n);
	if((n>='A' && n<='Z') || (n>='a' && n<='z'))
	{
		printf("a character is alphabet:%c",n);
	}
	else
	{
		printf("a character is not alphabet:%c",n);
	}
}
