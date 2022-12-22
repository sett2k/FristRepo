//
// Created by PRO on 22/12/19.
//

#include "stdio.h"
int main(){
    int a, b, c, d, e, f, size=0;
    printf("Enter Your Traingle Size : ");
    scanf("%d", &size);

    for(int i=0; i<size; i++){
        for(a=0; a<size-(i+1); a++){
            printf(" ");
        }
        for(b=0; b<=i*2; b++){
            printf("*");
        }
        for(c=0; c<b*2; c++){
            printf("#");
        }
        for(d=0; d<(size-(i+1))*10; d++){
            printf(" ");
        }
        for(c=0; c<b*2; c++){
            printf("#");
        }
        for(b=0; b<=i*2; b++){
            printf("*");
        }
        printf("\n");
    }
}
