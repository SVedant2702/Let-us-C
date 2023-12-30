#include<stdio.h>
#include<math.h>
void main()
{
	float t,v,wcf,a,b,c;
	printf("Enter Temp and Vel:-");
	scanf("%f%f",&t,&v);
	a=0.6215*t;
	b=(0.4275*t)-35.75;
	c=pow(v,0.16);
	wcf=35.74+a+b*c;
	printf("WCF: %f",wcf);
}