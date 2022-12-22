//
// Created by PRO on 22/12/17.
//

#include "stdio.h"

int main() {
    int i, j, k, l, m, n, o, size = 0;
    printf("Type your size:");
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        for (j = 0; j < size - (i+1); j++) {
            printf(" ");
        }
        for (k = 0; k <= i * 2; k++) {
            printf("*");
        }
        for (l = 0; l < k * 2; l++) {
            printf("#");
        }
        for (m = 0; m <(size-(i+1))*5; m++) {
            printf(" ");
        }
        for (j = 0; j < size-(i+1); j++) {
            printf(" ");
        }
        for (k = (size+2)/2; k < i*2 ; k++) {
            printf("$");
        }
        for (n = 0; n <= (size/size)+i; n++) {
            if(i<=2) {
                printf(" ");
            }
        }
        for(int s=0; s<=size-(i+2); s++){
            if(i>=3 && i<=6){
                printf(" ");
            }
        }
        for (m = 0; m <(size-(i+1))*5; m++) {
            printf(" ");
        }
        for (l = 0; l < (i+(i+1))*2; l++) {
            printf("#");
        }
        for (k = 0; k <= i * 2; k++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=0; i<size; i++){
        for(int a=0; a<(size*6)-3; a++){
            printf(" ");
        }
        for(int b=0; b<(size/size)+i; b++){
            printf(" ");
        }
        for (k = 0; k <= size-((i+1)*2) ; k++) {
            printf("$");
        }
        printf("\n");
    }

}

















































































































































































































































































































































































































































































































