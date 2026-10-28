#include<stdio.h>
int main (){
    double weight,cost;
    scanf("%lf",&weight);
    int zone;
    scanf("%d",&zone);
    if(weight<0){
        printf("Invalid Input\n");
        return 0;
    }
    if(zone==1){
        cost = 5.00*weight;
        printf("%.2lf",cost);
    }
    else if (zone==2){
        cost = 7.00*weight;
        printf("%.2lf",cost);
    }
    else if(zone==3){
        cost = 10.00*weight;
        printf("%.2lf",cost);
    }
    else if (zone == 4){
        cost = 12.00*weight;
        printf("%.2lf",cost);
    }
    else if(zone==5){
        cost = 16.00 *weight;
        printf("%.2lf",cost);
    }
    else if(zone==6){
        cost = 17.00*weight;
        printf("%.2lf",cost);
    }
    else if(zone==7){
        cost =19.00*weight;
        printf("%.2lf",cost);
    }
    else {
        printf("Invalid Input\n");
    }
    return 0;

}