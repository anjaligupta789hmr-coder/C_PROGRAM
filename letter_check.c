#include<stdio.h>
int main (){

    char letter;
    printf("enter a letter:");
    scanf("%c",&letter);
    if(letter=='a'|| letter=='A'){
        printf("%c is vowel",letter);
    }
    else if(letter=='e'|| letter=='E'){
        printf("%c is vowel",letter);
    }
    else if(letter=='i'|| letter=='I'){
        printf("%c is vowel",letter);
    }
    else if(letter=='o'|| letter=='O'){
        printf("%c is vowel",letter);
    }
    else if(letter=='u'||letter=='U'){
        printf("%c is vowel",letter);
    }
    else{
        printf("%c is consonat",letter);
    }
    return 0;
}        