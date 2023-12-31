#include<stdio.h>
#include<math.h>
void main()
{
	int x,y;
	printf("Enter coordinates : ");
	scanf("%d%d",&x,&y);
	if(x==0 && y!=0){
		printf("Point is on y axis");
	}
	else if(y==0 && x!=0){
		printf("Point is on x axis");
	}
	else if(x==0 && y==0){
		printf("Point is on origin");
	}
}