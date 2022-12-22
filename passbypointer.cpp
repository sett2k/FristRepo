//
// Created by PRO on 22/11/23.
//
#include "stdio.h"

void passbyptr(int *first, int *second);
int main(){

    int *a, *b;
    int age1=20; int age2=30;
    a=&age1; b=&age2;
    passbyptr(a, b);

    printf("First man age after 5 years: %d",*a);
    printf("\nSecond man age after 5 years: %d",age2);


    return 0;
}
void passbyptr(int *first, int *second){
    (*first)+=5;
    (*second)+=5;
}