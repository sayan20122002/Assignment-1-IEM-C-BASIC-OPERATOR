//Write a program to convert temperatures in Celsius to Fahrenheit and vice-versa
#include<stdio.h>
int main()
{
	float cel,fahr;
	printf("enter the celcious:");
	scanf("%f",&cel);
	fahr=(cel*5/9)+32;
	printf("convert temperatures in Celsius to Fahrenheit:%.2f",fahr);
}
