//Write a C program to input any character and check whether it is an alphabet, digit, or special character.
#include<stdio.h>
#include<string.h>
int main()
{
	char n;
	printf("enter the character:");
	scanf("%c",&n);
	if((n>='A' && n<='Z') || (n>='a' && n<='z'))
	{
		printf("a character is alphabet:%c",n);
	}
	else if(n>='0' && n<='9')
	{
		printf("a character is digit:%c",n);
	}
	else
	{
		printf("a character is special character:%c",n);
	}
}
