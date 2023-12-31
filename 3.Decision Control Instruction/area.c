#include<stdio.h>
#include<math.h>
void main()
{
	float l,b,a,p;
	printf("Enter length and bradth of a rectangle: ");
	scanf("%f%f",&l,&b);
	a=l*b;
	p=2*(l+b);
	if(a>p){
		printf("Area of rectangle is greater than perimeter");
	}
	else if(a==p){
		printf("Area is equal to perimerter");
	}
	else{
		printf("Area is less than permimeter");
	}
}