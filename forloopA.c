//
// Created by PRO on 22/12/20.
//
#include "stdio.h"

int main(){
    int a, b, c, d, e, x, y, z, i, j, k, l, size=0;
    printf("Enter Your Font Size :");
    scanf("%d", &size);

    for(i=0; i<size; i++){
        for(j=0; j<size-i; j++){
            printf(" ");
        }
        for(a=0; a<(size/(size/2))+1; a++){
            printf("a");
        }
        for(b=0; b<i*2; b++){
            if(i<=(size/2)-2){
                printf(" ");
            }
            else if(i<=size/2){
                printf("a");
            }else{
                printf(" ");
            }
        }
        for(a=0; a<(size/(size/2))+1; a++){
            printf("a");
        }
        for(c=0; c<=size-i; c++){
            printf(" ");
        }
        for(k=0; k<(size/(size/2))+1; k++){
            printf("k");
        }
        for(c=0; c<(size-((i+1)*2))*1; c++){
            printf(" ");
        }
        for(k=0; k<(size/(size/2))-2; k++){
            if(i<=size/2) {
                printf("k");
            }
        }
        for(c=0; c<((i*2)-size)*1; c++) {
            if (i > size / 2) {
                printf(" ");
            }
        }
        for(d=0; d<(size/(size/2))+1; d++){
            printf("k");
        }
        for(x=0; x<=(i*2)+1; x++){
            if(i<size/2) {
                printf("g");
            }
        }
        for(y=0; y<=((size/2)*2); y++){
            if(i>=size/2){
                printf("g");
            }
        }

        printf("\n");
    }
}