
    #include<stdio.h>
    int main (){
        int num1,num2,num3;
        printf("enter a number1:");
        scanf("%d",&num1);
        printf("enter a number2:");
        scanf("%d",&num2);
        printf("enter a number3:");
        scanf("%d",&num3);
        if(num1<=num2 && num1<num3){
            printf("num1 = %d is a small number",num1);
        }
        else if(num2<num1 && num2<num3){
             printf("num2 = %d is a small number",num2);
        }
        else if (num1==num2 && num1==num3){
            printf("they are equal");
        }
        else{
            printf("num3 = %d is small number",num3);
        }
        return 0;
    } 
    
        
