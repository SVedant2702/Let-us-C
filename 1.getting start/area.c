/*The length and breadth of a rectangle and radius of a circle are input through the keyboard to. 
WAP to 
calculate the area and perimeter of rectangle and the area and circumference of the circle*/

#include<stdio.h>
#include<math.h>

int main()
{
	float r,ar,pmr,l,b,pmc,ac;
	printf("Give the length and breadth of  the rectangle");
	scanf("%f%f",&l,&b);
	pmr=2*(l+b);
	ar=l*b;
	printf("Enter the radius of the circle");
	scanf("%f",&r);
	ac=3.14*r*r;
	pmc=2*3.14*r;
	printf("%f%f",pmr,ar);
	printf("%f%f",pmc,ac);
}