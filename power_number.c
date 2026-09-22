#include<stdio.h>
#include<math.h>

int main (){
    int N;

    printf("Enter a number :");

    scanf("%d",&N);

    printf("print a first power = %.2f\n",pow(N,1));

    printf("print a second power = %.2f\n",pow(N,2));

    printf("print a third power = %.2f\n",pow(N,3));//decimal place upto only 2 digits means 

    return 0;

}