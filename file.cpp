//
// Created by PRO on 22/11/23.
//
//#include "stdio.h"
//
//int main(){
//
//    int i;
//    int myarray[100];
//
//    FILE *fptr;
//    fptr= fopen("File.txt","w");
//
//    for(i=1; i<=100; i++){
//        fprintf(fptr,"%d\n",i);
//    }
//    fclose(fptr);
//
//
//    FILE *fptr2;
//    fptr2=fopen("File.txt","r");
//
//    if(fptr2==NULL){
//        printf("File cannot be opened.");
//    }else{
//        printf("File opened\n");
//    }
//    for(i=0; i<100; i++){
//        fscanf(fptr2,"%d\n",&myarray[i]);
//        printf("%d\n",myarray[i]);
//    }
//    fclose(fptr2);
//
//    return 0;
//}

#include "stdio.h"
 int main(){

    int fileArray[100];
    int j,k,m,n;
    char l;

    FILE *fptr;
    fptr=fopen("File2.txt","w");

     if(fptr==NULL){
         printf("File cannot be opened.");
     }else{
         printf("File opened.\nEnter five numbers:\n ");
         scanf("%d%d%c%d%d",&j,&k,&l,&m,&n);
         printf("\n%d\n%d\n%c\n%d\n%d",j,k,l,m,n);
         fprintf(fptr,"%d\n%d\n%c\n%d\n%d\n",j,k,l,m,n);
     }
    fclose(fptr);
//
//    FILE *fptr2;
//    fptr2=fopen("File2.txt","r");
//
//    for(int i=0; i<100; i++){
//        fscanf(fptr2, "%d",&fileArray[i]);
//        printf( "\n%d", fileArray[i]);
//    }
//    fclose(fptr2);
return 0;
}
