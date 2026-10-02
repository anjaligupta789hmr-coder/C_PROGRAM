#include<stdio.h>
int main (){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a%5==0){
        printf("Number %d is divisible by 5\n",a);
    }
    else if (a%11==0){
        printf("Number %d is divisible by 11\n",a);

    }
    else{
        printf("Neither be divisible by 5 nor 11");
    }
    return 0;
}