#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    if(a==1){
        printf("Today is Monday");
    }
    else if(a==2){
        printf("Today is Tuesday");
    }
    else if(a==3){
        printf("Toady is wednesday");
    } 
    else if(a==4){
        printf("Toady is Thursday");
    }
    else if(a==5){
        printf("Today is Friday");
    } 
    else if (a==6){
        printf("Toady is Saturday");
    } 
    else if(a==7){
        printf("Today is Sunday");
    }
    return 0;
}