#include<stdio.h>
int main (){
    int SP,CP,profit,loss;
    printf("Enter a Selling Price:");
    scanf("%d",&SP);
    printf("Enter a Cost Price :");
    scanf("%d",&CP);
    profit = SP - CP;
    loss = CP -SP;
    if(profit>0){
        printf("Profit is %d rupee",profit);
        
    }
    else {
        printf("Loss is %d rupee",loss);
    
    }
    return 0;
    
}