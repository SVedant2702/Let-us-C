#include<stdio.h>
#include<math.h>
void main()
{
	int r,s,a;
	printf("Enter ages of Ram,Shyam and Ajay:");
	scanf("%d%d%d",&r,&s,&a);
	if(r<=a && r<=s){
		printf("Ram is Youngest");
	}
	else if(s<=r && s<=a){
		printf("Shyam is Youngest");
	}
	else{
		printf("Ajay is Youngest");
	}
}