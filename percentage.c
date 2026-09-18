#include<stdio.h>
int main (){

    int physcis,maths,hindi,english,chemistry;

    printf("enter a marks of Physcis:");
    scanf("%d",&physcis);

    printf("enter a marks of Maths:");
    scanf("%d",&maths);

    printf("enter a marks of Hindi:");
    scanf("%d",&hindi);

    printf("enter a marks of English:");
    scanf("%d",&english);

    printf("enter a marks of chemistry:");
    scanf("%d",&chemistry);
    float sum = physcis+maths+hindi+english+chemistry;
    printf("Sum of 5 subject = %f\n",sum);
    float percentage = (sum/500)*100;
    printf("Percentage of 5 Subjects = %f\n",percentage);

    return 0;


}