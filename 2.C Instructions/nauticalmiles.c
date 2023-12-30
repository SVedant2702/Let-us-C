#include<stdio.h>
#include<math.h>
void main()
{
	float l1,l2,g1,g2,a,b,c,d;
	printf("Enter values of L1,L2,G1,G2:");
	scanf("%f%f%f%f",&l1,&l2,&g1,&g2);
	a=sin(l1)*sin(l2);
	b=cos(l1)*cos(l2);
	c=cos(g2-g1);
	d=3963*acos(a+b*c);
	printf("D: %f",d);
}