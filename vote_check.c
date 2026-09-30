#include<stdio.h>
int main (){
    int age;
    printf("Enter a Age:");
    scanf("%d",&age);
    if(age>=18){
        if(age>=60){
            printf("Senior Citizen\n");
        }
    
        printf(" Eligibe for Vote\n");
    }
    else if(13<age>18){
        printf("Teenager\n");
    
        printf("Not Eligibe for Vote\n");
    }
    else{
        printf("They are eligible for children vote\n");
    }
    return 0;
}