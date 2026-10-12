#include<stdio.h>
int main (){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    do{
        int sum = (n*(n+1)/2);
        printf("Sum of %d Natural Number = %d",n,sum);
    }while(n==0);//if the user put n=0 so it turns into infinite loop 
    
    return 0;
}