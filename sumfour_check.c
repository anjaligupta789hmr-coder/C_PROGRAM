#include<stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    int a = num/1000;
    printf("%d\n",a);
    int b = (num%1000)/100;
    printf("%d\n",b);
    int c = (num%100)/10;
    printf("%d\n",c);
    int d = (num%10)/1;
    printf("%d\n",d);
    int sum = a+b+c+d;
    printf("%d\n",sum);
    return 0;

}