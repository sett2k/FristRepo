#include "stdio.h"

int main(){
    int a, b, c, d, e, s, x, y, z, i, j, k, l, size=0;
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
        for(a=0; a<=(size/(size/2))+1; a++){
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
        for(x=0; x<=(i*2)+2; x++){
            if(i<size/2) {
                printf(" ");
            }
        }
        for(x=0; x<=size; x++){
            if(i==size/2 ){
                printf(" ");
            }
        }
        for(y=0; y<=((size/2)*2)-((i*2)-((size/2)*2)); y++){
            if(i>size/2){
                printf(" ");
            }
        }
        for(s=0; s<(size/(size/2))+1; s++){
            if(i<=size/2){
                printf("s");
            }
        }
        for(s=0; s<size+(size/3); s++){
            if(i<=1){
                printf("s");
            }
        }
        for(e=0; e<size+(size/3); e++){
            if(i>1 && i<(size/2)-1){
                printf(" ");
            }
        }
        for(s=0; s<size+(size/3); s++){
            if(i>=(size/2)-1 && i<=size/2){
                printf("s");
            }
        }
        for(e=0; e<size+(size/3); e++){
            if(i>size/2 && i<size-2){
                printf(" ");
            }else if(i>=size-2){
                printf("s");
            }
        }
        if(i>size/2 ) {
            for (s = 0; s < (size / (size / 2)) + 1; s++) {
                printf("s");
            }
        }
        printf("\n");
    }
}