#include<stdio.h>
int main (){
    int i;
    
    printf("Enter a Number:");
    scanf("%d",&i);
   do{
    printf("%d\n",i--);
    
   }
   while(i>=0);
  
          
    return 0;
}