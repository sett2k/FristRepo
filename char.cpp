//
// Created by PRO on 22/11/29.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void fileBuild();
void inputData();

int main(){
    fileBuild();
    inputData();


    return 0;
}

void fileBuild() {
    FILE *ff;
    ff = fopen("char.txt", "w");
    fclose(ff);

    FILE *ff2;
    ff2= fopen("char.txt","a");
    srand(time(0));
    int i = 0;
    while (i < 1000) {
        int x = rand() % 123;
        if (x > 96) {
            fprintf(ff2, " %c\n", x);
            i += 1;
        }

    }
}

void inputData(){
    FILE *fff;
    fff = fopen("char.txt","r");
    char z = fgetc(fff);
    while(!feof(fff)){
        printf("%d\n",z);
        z= fgetc(fff);
    }
    fclose(fff);
}
//    srand(time(NULL));
//    int i=0;
//    while( i<10) {
//        i++;
//        printf("%d\n", rand() % 5);
//    while(i<1000){
//        int data=rand()%123;
//        if(data>96){
//            printf("%d\n",data);
//        }
    //}

//void generateChar();
//void counting();
//void dataPrinting();
//
//int forCount[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
//
//int main(){
//
//
//    generateChar();
//    counting();
//    dataPrinting();
//
//    return 0;
//}
//
//void generateChar(){
//    FILE *fptr;
//    fptr = fopen("ass4.txt","w");
//    fclose(fptr);
//    FILE *fptr1;
//    fptr1 = fopen("ass4.txt","a");
//
//    srand(time(0));
//    int i=0;
//    while(i<1000){
//
//        int data =rand()%123;
//        if(data>96){
//            fprintf(fptr1,"%c",data);
//            i++;
//        }
//
//    }
//    fclose(fptr1);
//
//}
//
//void counting(){
//
//    FILE *fptr;
//    fptr = fopen("ass4.txt","r");
//
//    char c = fgetc(fptr);
//
//    while (!feof(fptr)){
//        printf("data: %d\n",c);
//
//        int index = c - 97;
//        forCount[index]=forCount[index]+1;
//
//        printf("index: %d\n",index);
//        c = fgetc(fptr);
//
//    }
//    printf("hello ");
//    fclose(fptr);
//
//
//}
//
//void dataPrinting(){
//    int alpha=97;
//    for(int i=0; i<26 ; i++){
//        printf("data from array %c : %d\n",alpha,forCount[i]);
//        alpha++;
//
//
//    }
//
//}
