//
// Created by user on 2021-06-11.
//
#include <stdio.h>

int main(void) {
    printf("%d", add());
    printf("%d", add());
    printf("%d", add());
    printf("%d", add());
    printf("%d", add());

}

int add() {
    static int tmp = 0;
    ++tmp;
    return tmp;
}