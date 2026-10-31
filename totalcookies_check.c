#include<stdio.h>
int main (){
    int n,numcookies,totalcookies=0;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        scanf("%d",&numcookies);
        totalcookies = totalcookies+numcookies;
    }
    printf("%d\n",totalcookies);
    return 0;
}