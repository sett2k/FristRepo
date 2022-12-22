//
// Created by PRO on 22/11/23.
//
#include "stdio.h"

int main(){
    int i, data[5], total=0;

    printf("Enter the numbers:");
    for(i=0; i<5; i++) {
        scanf("%d", data+i);

        total += *(data+i);
    }

        printf("Total Numbers=%d\n",total);
    for(int x=0; x<5; x++){
        printf("Number:%d // Address:%d\n",data[x],&data[x]);
    }






  //  int age = 22;
  //  int age2=32;
   // int *p;
  //  p=&age2;

    //printf("%d\n",&age2);
  //  printf("%d\n",&*p);
  //  printf("Value:::\n");
  //  printf("%d\n",age2);
  //  printf("%d",*p);
}