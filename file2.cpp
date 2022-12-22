//
// Created by PRO on 22/11/29.
//
#include "stdio.h"
int myarr[26];
void open();
void readandinput();
void output();
int main(){

    open();
    readandinput();
   output();

    return 0;
}
void open(){
    FILE *fptr;
    fptr=fopen("File3.txt","w");
    fclose(fptr);

    FILE *fptr2;
    fptr2=fopen("File3.txt","a");
    if(fptr2==NULL){
        printf("File cannot be opened.");
    }else{
        printf("File opened.\n");
        for(char i='A'; i<='Z'; i++){
            fprintf(fptr2," %c",i);
            fprintf(fptr2,"\n");
        }
    }
    fclose(fptr2);
}

void readandinput(){
    char data;
    int x=0;
    //int myarr2[26];

    FILE *fptr3;
    fptr3=fopen("File3.txt","r");
    //fprintf(fptr3,"%c\n");
//    for(int i=0; i<=25; i++){
//        fscanf(fptr3," %c",&myarr2[data]);
//        printf(" %c\n",myarr[i]);
//        printf("data: %c",data);
//    }

    while(fscanf(fptr3," %c",&data)==1) {
        myarr[x] = data;
        x++;
    }
    fclose(fptr3);
}
//   printf("%d",data);
//    fclose(fptr3);
//}

void output(){
    for(int i=0; i<26; i++){
        printf("FileData: %c\n",myarr[i]);
    }
}