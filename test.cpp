#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void createfile();
void reanAndInput();
void dataCount();
int testArr[26]={};
//int testArr[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int main(){
    createfile();
    reanAndInput();
    dataCount();
    printf("\n Size: %d", sizeof(testArr));

//    for(int i=0; i<10; i++) {
//        printf("%d\n", rand() % 10);
//    }
}

void createfile(){
    FILE *ff;
    ff= fopen("text.txt","w");
    fclose(ff);

    FILE *fff;
    fff= fopen("text.txt","a");
    srand(time(NULL));
    int i=0;
    while(i<1000){
        int x=rand()%123;
        if(x>96){
            //printf(" %c\n",x);
            fprintf(fff,"%c",x);
            i++;
        }
    }
    fclose(fff);
}

void reanAndInput(){
    FILE *ffff;
    ffff= fopen("text.txt","r");
    char z = fgetc(ffff);
    while(!feof(ffff)){
        printf("no: %d\n",z);
        int x =z-97;
        testArr[x]++;
        printf("index: %d\n",testArr[x]);

        z= fgetc(ffff);
    }
    fclose(ffff);
}

void dataCount(){
    int c=97;
    for(int i=0; i<26; i++){
        printf(" char %c : %d\n ",c,testArr[i]);
        //testArr[i]++;
        c++;
    }
    printf("size of arr: %d", sizeof (testArr));

}