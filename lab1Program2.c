/****************************************
Lab 1 - Program 2 - Formula
Author: Alexandre Paquette
Date: September 25, 2020

Task:
Given c=3, d=1, x=7, and y=4 create a 
program that outputs the result of the 
formula below using a single printf function.
    f = ( c – d )( x – y )
****************************************/

#include <stdio.h>

int main(void){
    int c = 3;
    int d = 1;
    int x = 7;
    int y = 4;
    int f = (c - d) * (x * y);

    printf("The answer to f = (c - d) x (x - y) given c = %d, d = %d, x = %d, and y = %d is %d.\n", c, d, x, y, f);

    return 0;
}