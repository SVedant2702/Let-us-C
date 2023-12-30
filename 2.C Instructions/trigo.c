#include<stdio.h>
#include<math.h>
void main()
{
	float d,a,s,si,c,ci,t,ti;
	printf("Enter angle in degree:");
	scanf("%f",&d);
	a=0.0174*d;
	s=sin(a);
	si=1/sin(a);
	c=cos(a);
	ci=1/cos(a);
	t=tan(a);
	ti=1/tan(a);
	printf("sin:%0.2f\ncosec:%0.2f\ncos:%0.2f\nsec:%0.2f\ntan:%0.2f\ncot:%0.2f",s,si,c,ci,t,ti);
}