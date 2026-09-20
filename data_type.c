#include<stdio.h>
int main (){
    int i;    
    float f;
    char c;
    double d;

    printf("Size of integer type = %d bytes\n",sizeof(int));
    printf("Size of float type = %d bytes\n",sizeof(float));
    printf("Size of character type = %d bytes\n",sizeof(char));
    printf("Size of double tyoe = %d bytes\n",sizeof(double));
    return 0;
}