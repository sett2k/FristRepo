//
// Created by PRO on 22/11/23.
//
#include "stdio.h"
#include "string.h"

struct intern{


    int age=0;
    char skill[9];
};
int main(){
    struct intern i1;
    struct intern i2;

    i1.age=20;
    strcpy(i1.skill,"MSOffice");
    i2.age=22;
    strcpy(i2.skill,"Photoshop");

    printf("Intern1 Age:%d//Skill:%s",i1.age,i1.skill);
    printf("\n\nIntern2 Age:%d//Skill:%s\n",i2.age, i2.skill);

}