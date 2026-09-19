#include<stdio.h>
int main (){
    float celsius;

    printf("enter a temperature in celcius:");

    scanf("%f",&celsius);

    float fahrenheit = (celsius*9/5)+32; 

    printf("Temperature in Fahrenheit = %f",fahrenheit);

    return 0;

}