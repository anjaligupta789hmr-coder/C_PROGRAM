#include<stdio.h>
int main (){
    int A,B,C;
    printf("Enter a Side A:");
    scanf("%d",&A);
    printf("Enter a Side B:");
    scanf("%d",&B);
    printf("Enter a Side C:");
    scanf("%d",&C);
    if(A==B & B==C & A==C){
        printf("This is the Equilateral Triangle\n");
    } 
    else if (A==B & B!=C & A!=C ){
        printf("This is the Isoscele Triangle\n");
    }
    else{
        printf("This is the Scalene Triangle\n");
    }
    return 0;
}