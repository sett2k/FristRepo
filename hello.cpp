//
// Created by PRO on 22/11/24.
//
#include "stdio.h"
int main(){

    int sth;
    FILE *fptr;
    fptr= fopen("Hello.txt","a");

    if(fptr==NULL){
        printf("File cannnot be opened");
    }else{
        printf("File opened by code:");
        scanf("%d",&sth);
        printf("Code:%d",sth);
        fprintf(fptr,"%s%d%c","Code",sth,'\n');
        fclose(fptr);

    }


}