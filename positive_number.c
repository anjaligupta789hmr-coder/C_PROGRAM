#include<stdio.h>
int main (){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    
    
    if(a>0){
        printf("Positive Number");
    }
    else if(a==0){
        printf("%d is neither positive nor negative",a);
    }
    else {
        printf("Negative Number");

    }
    return 0;
}