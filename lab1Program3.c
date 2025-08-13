/****************************************
Lab 1 - Program 2 - User Input Formula
Author: Alexandre Paquette
Date: September 25, 2020

Task:
Write a program that uses the formula
    f = ( c – d )( x – y )
that prompts the user for the values 
for c, d, x, y. Make sure to use appropriate 
variables names.
****************************************/

#include <stdio.h>
int main(void) {
    int c;
    int d;
    int x;
    int y;

    printf("Please enter a value for variable c.\n"); 
    scanf("%d", &c);

    printf("Please enter a value for variable d.\n"); 
    scanf("\n %d", &d);

    printf("Please enter a value for variable x.\n"); 
    scanf("\n%d", &x);

    printf("Please enter a value for variable y.\n"); 
    scanf("\n%d", &y);

    int f = (c -d ) * (x - y);

    printf("The answer to f = (c - d) * (x - y) given c = %d, d %d, x = %d, and y = %d is %d.\n", c, d, x, y, f);
    
    return 0;
}