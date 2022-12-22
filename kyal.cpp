//
// Created by PRO on 22/12/22.
//
#include "stdio.h"

int main(){
    int a,b,c,d,e,f,g,h,j,i,k,l,m,n,o,p,q,size=0;
    printf("Enter your star size:");
    scanf("%d",&size);
    int space=(size*8)/3;

    for(i=0; i<=size/3; i++){

        for (j = 0; j <= (size + (size / 3) - (i + 1)); j++){
            printf(" ");
        }
        for(a=0; a<=i*2; a++){
            printf("*");
        }
        for (j = 0; j <= (size + (size / 3) - (i + 1)); j++){
            printf(" ");
        }
        printf("\n");
    }

    for(i=0; i<(size/3); i++){

        for(j=0; j<(i*3); j++) {
            printf(" ");
        }
        for(b=0; b<=space-(i*6); b++){
            printf("*");
        }
        for(j=0; j<(i*3); j++) {
            printf(" ");
        }
        printf("\n");
    }

    for(i=0; i<=(size/3)-1; i++){
        for(j=0; j<=((size/3)*2)-i; j++){
            printf(" ");
        }
        for(a=0; a<((size)-(i*3))-1; a++) {
            printf("*");
        }
        int VV= (i*4)-4;
        if(i>1) {
            for(b=0; b<VV; b++){

                printf(" ");
            }
            for(b=0; b<VV; b++){

                printf(" ");
            }
        }
        for(b=0; b<(i+1)*(size/3); b++) {
            if (i <= 1) {
                printf("*");
            }
        }
        for(a=0; a<((size)-(i*3))-1; a++) {
            if(i>1) {
                printf("*");
            }
        }
        for(j=0; j<=((size/3)*2)-i; j++){
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
