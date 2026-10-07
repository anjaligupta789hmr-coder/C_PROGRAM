#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter a first side of triangle:");
    scanf("%d",&a);
    printf("Enter a second side of triangle:");
    scanf("%d",&b);
    printf("Enter a third side of triangle:");
    scanf("%d",&c);
    if(a>0 & b>0 & c>0){
        if(a+b>c){
        printf("The triangle is valid\n");
        }
        else{
        printf("The triangle is not valid\n");
        }    
    }
    printf("Sides can neither be negative nor zero\n");
    return 0;
}