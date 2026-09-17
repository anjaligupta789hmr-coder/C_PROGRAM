#include<stdio.h>
int main (){
    int BS,A,OE;
    printf("enter a Basic Salary:");
    scanf("%d",&BS);
    printf("enter a Allowances:");
    scanf("%d",&A);
    printf("enter a other earnings:");
    scanf("%d",&OE);
    int glosssalary = (BS+A+OE);
    printf("Gloss Salary = %d",glosssalary);
    return 0;
}