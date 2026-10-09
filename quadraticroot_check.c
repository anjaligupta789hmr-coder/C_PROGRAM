#include<stdio.h>
#include<math.h>
int main (){
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    int Discriminant = (b*b-4*a*c);
    printf("Discriminant is %d\n",Discriminant);

    if(Discriminant > 0){
        printf("Roots of quadratic equation has two distinct real roots\n"); 
        float x = (((-b)+sqrt(Discriminant))/(2*a));
        printf("first root is %.2f\n",x);
        x = (((-b)-sqrt(Discriminant))/(2*a));
        printf("second root is %.2f\n",x);
    }

    else if(Discriminant == 0){
        printf("Roots of quadratic equation has two equal roots");
        float x = (((-b)+sqrt(Discriminant))/(2*a));
        printf("first root is %.2f\n",x);
        x = (((-b)-sqrt(Discriminant))/(2*a));
        printf("second root is %.2f\n",x);
               
    }
        
    else{
        printf("Roots of quadratic equation has no roots\n ");

    }
    return 0;
}