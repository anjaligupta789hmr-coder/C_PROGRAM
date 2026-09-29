#include<stdio.h>
int main (){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    if(a%4==0){
        printf("This is the leap year");
    }
    else{
        printf("This is not leap year");
    }
    return 0;
}