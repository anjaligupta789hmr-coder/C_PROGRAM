#include<stdio.h>
int main (){
  int totalnotes = 0;
  int i,counts;
  int denomination[] = {500,200,100,50,20,10,5,2,1};
  int num = sizeof(denomination)/sizeof(denomination[0]);
  int amount;
  printf("Enter a amount:");
  scanf("%d",&amount);
  
  for(i = 0;i<num;i++){
    int counts = (amount/denomination[i]);
    printf(" %d notes : %d\n",denomination[i],counts);
   
    if(counts>0){
      amount = (amount%denomination[i]);
      printf("remaining amount : %d\n",amount);   
    }
  }
  return 0;
}