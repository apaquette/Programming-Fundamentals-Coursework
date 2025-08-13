/******************************************* 
Lab 2 - Program 1 - Magic 8-ball (Version 2) 
Alexandre Paquette 
Date: September 30, 2020

Task:
Create a “magic eight ball” program in which 
the user can verbally ask the computer a 
question and push “enter” and the computer 
will randomly select one of the eight answers 
you have programmed into it.
*********************************************/ 
 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main(void) { 
    srand(time(NULL));      //set random to use time as seed 

    int num = rand() % 8;   //generate a number between 0-7 (8 options altogether) 
    char temp;              //temp variable to allow program to accept enter to proceed 
    char answers[8][20] = {"Without a doubt.","Most likely.","Outlook good.","As I see it, yes.","Ask again later.","Cannot predict now.","Outlook not so good.","Very doubtful."};  //array that stores all possible answers 

    printf("Ask the computer a question, then press enter:"); 
    scanf("%c", &temp);      //use a character variable to accept enter from the user 
    printf("%s", answers[num]);   //outputs a random answer from the array 

    return 0; 
} 