#include<stdio.h>
#include<math.h>
void main()
{
	float x1,x2,x3,y1,y2,y3,m1,m2;
	printf("Enter three points in following x1,y1,x2,y2,x3,y3:");
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
	m1=(y2-y1)/(x2-x1);
	m2=(y3-y1)/(x3-x1);
	if(m2==m1){
		printf("Given points are in same line");
	}
	else{
		printf("Given points are not in same line");
	}
}