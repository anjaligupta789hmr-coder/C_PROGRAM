#include<stdio.h>
int main (){
    int P,R,T;
    printf("enter a principal:");
    scanf("%d",&P);
    printf("enter a rate:");
    scanf("%d",&R);
    printf("enter a time:");
    scanf("%d",&T);
    
    int SimpleInterest = (P*R*T)/100;
    printf("Simple Interest = %d",SimpleInterest);
    return 0;
}    