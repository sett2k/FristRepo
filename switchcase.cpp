//
// Created by PRO on 22/11/23.
//
#include "cstdio"

int main() {

    printf("Switch case break// \n");

    char word;
    printf("Choose your career: ");
    scanf(" %c", &word);


    switch (word) {
        case 'f':
            printf("Front-end Developer");
            break;
        case 'b':
            printf("Back-end Developer");
            break;
        case 'F':
            printf("Full stack Developer");
            break;
        case 'h':
            printf("Hacker");
            break;
        default:
            printf("Other Programmer");

            return 0;

    }
}
