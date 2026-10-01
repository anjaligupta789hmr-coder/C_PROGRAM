#include<stdio.h>

int main (){
    int Date,Months,Year;
    printf("Enter a Date:Months:Year ");
    scanf("%d %d %d",&Date,&Months,&Year);
    if(Date>=1 && Date<=31 && Months>=1 && Months<=12 && Year>=1600 && Year<=2050){
        printf("%d %d %d\n",Date,Months,Year);
        printf("Date,Months,Year is correct\n");
    } 
    else{
        printf("Wrong Date\n");
        
    }  
    return 0;
}