#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	printf("Enter 3 anlges of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b+c)==180){
		printf("Triangle is valid");
	}
	else{
		printf("Triangle is Not valid");
	}
}