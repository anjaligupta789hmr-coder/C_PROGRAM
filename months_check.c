#include<stdio.h>
int main (){
    int a;

    printf("Enter a Months Number:");
    scanf("%d",&a);
    if(a==1){
        printf("January");   
    }
    else if(a==2){
        printf("Febraury");   
    }
    else if(a==3){
        printf("March");
    }
    else if(a==4){
        printf("Arpil");
    }
    else if (a==5){
        printf("May");
    }
    else if(a==6){
        printf("June");
    }
    else if(a==7){
        printf("July");
    }
    else if(a==8){
        printf("August");
    }
    else if (a==9){
        printf("September");
    }
    else if(a==10){
        printf("October");
    }
    else if (a==11){
        printf("Novemeber");
    }
    else if(a==12){
        printf("Decemeber");
    }
    else{
        printf("Not a Valid Months Number");
    }
    return 0;
}