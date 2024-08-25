// Write a C program to input any alphabet and check whether it is a vowel or consonant.
#include<stdio.h>
#include<string.h>
int main()
{
	char n;
	printf("enter the character:");
	scanf("%c",&n);
	if((n=='a' || n=='i' || n=='o' || n=='u' || n=='e') || (n=='A' || n=='I' || n=='O' || n=='U' || n=='E'))
	{
		printf("this character is vowel:%c",n);
	}
	else
	{
		printf("this character is consonant:%c",n);
	}
}
