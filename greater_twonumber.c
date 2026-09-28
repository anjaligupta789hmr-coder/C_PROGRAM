#include<stdio.h>
int main (){
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    if(a>b){
        printf("%d is the greater number",a);
    }
    else{
        printf("%d is the greater number",b);
    }
    return 0;
}