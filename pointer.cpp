//
// Created by PRO on 22/11/23.
//
#include "stdio.h"

void swap(char *s1, char *s2);
int main(){

    char shirt1='b';
   char shirt2='w';

    printf("Black Shirt : %c",shirt1);
    printf("\nWhite Shirt : %c",shirt2);
    swap(&shirt1, &shirt2);
    printf("\nBlack Shirt : %c",shirt1);
    printf("\nWhite Shirt : %c",shirt2);

}

void swap(char *s1, char *s2){
    char temp;
    temp = *s1;
    *s1=*s2;
    *s2=temp;


}
