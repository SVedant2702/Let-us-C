/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour
worked above 40 hours. Assume that employees do not work for
fractional part of an hour.
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,hr,ot;
	float ot_pay;
	while(i<=10){
		printf("Enter the time worked for employee %d=>",i);
		scanf("%d",&hr);
		if(hr>40){
			ot=hr-40;
			ot_pay=ot*12;
			printf("%.2f is your overpay\n",ot_pay);
		}
		else{
			printf("You have not done any overtime\n");
		}
		i++;
	}
}