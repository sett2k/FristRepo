#include "stdio.h"

int main(){

        int age=0;

        printf("Type your age: ");
        scanf("%d",&age);

        if(age>20 && age==20){
            printf("Your age is over 20");
        }else if(age == 21){
            printf("Your age is %d",age);
        }else if(age<20){
            printf("Your age is under 20");
        }else{
            printf("Your age: %d",age);
        }
    return 0;
    }
