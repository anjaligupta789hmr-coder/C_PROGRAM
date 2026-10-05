#include<stdio.h>
int force (int mass,int acceralation);
int main (){
    int mass;
    printf("enter a m:");
    scanf("%d",&mass);
    int acceralation;
    printf("enter a :");
    scanf("%d",&acceralation);
    printf("the value of force is :%d Newton",force(mass,acceralation));
    return 0;
}
int force (int mass,int acceralation){
    int force = mass * acceralation;
    return  force ;
}