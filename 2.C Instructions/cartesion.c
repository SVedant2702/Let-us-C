#include<stdio.h>
#include<math.h>
void main()
{
	float a,x,y,r,phi;
	printf("Enter values of X and Y:-");
	scanf("%f%f",&x,&y);
	a=pow(x,2)+pow(y,2);
	r=sqrt(a);
	phi=atan(y/x);
	printf("r:%f\nphi:%f",r,phi);
}