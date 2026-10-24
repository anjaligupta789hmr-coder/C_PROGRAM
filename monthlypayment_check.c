#include<stdio.h>
#include<math.h>
int main(){
double principal, annualrate, monthlyrate;
int nummonths;
scanf("%lf",&principal);
scanf("%lf", &annualrate);
scanf("%d",&nummonths);
monthlyrate = (annualrate/(12.0*100.0));
printf("%.4lf\n",monthlyrate);
double a = pow(1+monthlyrate,nummonths);
printf("%.2lf\n",a);
double monthlypayment =(principal*monthlyrate*a/(a-1.00));
printf("%.0lf\n",monthlypayment);
return 0;
}



