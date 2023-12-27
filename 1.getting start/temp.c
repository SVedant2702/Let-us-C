//temperature of a city in farenheit degree is input through the keyboard. Write a program to convert this temperature into centigrade degrees.

#include<stdio.h>
#include<math.h>

int main(){

    float df,dc;
    printf("Enter the temperature in farenheit");
    scanf("%f",&df);
    dc=(df-32)*(5/9);
    printf("temerature in degree centigrade is %f",dc);
    return 0;
}