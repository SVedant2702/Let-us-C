#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("Enter 5 digit Number:-");
	scanf("%d",&n);
	while(n!=0){
		int a=n%10;
		sum=sum+a;
		n=n/10;
	}
	printf("Sum:-%d",sum);
}