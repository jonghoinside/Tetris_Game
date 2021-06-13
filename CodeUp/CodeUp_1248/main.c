//
// Created by ajh07 on 2021-06-13.
//

#include <stdio.h>

int isPrimeNum(int num) {
    for(int i = 1; i < num; )
}

int main(void) {
    int num;
    scanf("%d", &num);

    if (num == 1) {
        printf("1 1");
        return 0;
    }

    int i , j;
    for (i = 1, j = num/i ; i < num/2; j = num/++i) {
        if (isPrimeNum(i) && isPrimeNum(j)) {

        }
    }


    return 0;
}