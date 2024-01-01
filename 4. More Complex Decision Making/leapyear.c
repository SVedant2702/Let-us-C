/*Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical operators
&& and ||.*/

#include<stdio.h>

int main()
{
	int y,leap;
	printf("Enter the year");
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("Not a leap year");
	}
}