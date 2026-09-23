#include<stdio.h>

int main (){
    int a,b;

    printf("Enter a number :");

    scanf("%d",&a);

    printf("Enter a number :");

    scanf("%d",&b);
    int max;

    if(a>b){
        max = a;
    }
    else{
        max = b;
    }
    
    while(1){

        if(max%a==0 && max%b==0){
        printf("LCM of %d and %d = %d",a,b,max);
        break;
        }
        max++;
    }
    

    return 0;
}