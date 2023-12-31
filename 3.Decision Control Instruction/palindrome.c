#include<stdio.h>
int main()
{
	int n,e,a,b,c,d,n1;
	scanf("%d",&n);
	e=n;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	n1=(a*10000)+(b*1000)+(c*100)+(d*10)+n;
	printf("%d\n",n1);
	if(e==n1){
		printf("Yes same Number");
	}
	else{
		printf("Different number");
	}
}