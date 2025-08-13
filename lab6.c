/******************************************************************************
Lab 6 - Name Reverser version 3.0
Alexandre Paquette
Date: November 06, 2020

Task:
Create a program in which the user enters their name (into a character array) 
and then have the program print that name off backwards with an * between each 
letter. Then have the program ask the user if they would like to try again.

Bugs: There are a few bugs I did not have time or know how to fix:
      1 - User name input will cut-off if any spaces are entered by the user
      2 - Any characters inputted after spaces will be used in the next scanf
          Figuring out how to clear the users input. (Haven't figured that out yet)
      3 - Character input is limited by the size of the name array (currently set
          to 1000). It is unlikely a user would input a string larger than 1000. 
    To fix this, you would have to dynamically assign the size of the array.
*******************************************************************************/

#include <stdio.h>

int main(){
    char name[1000], run = 'y';

    do{//main program loop
        int length = 0;     

        printf("\nEnter your name: ");
        scanf("\n%s", name);
        
        while (name[length] != '\0')  //find length of array
            length ++;
        
        length--;                     //account for position 0 of the array

        printf("\nYour name backward is ");

        while (length >= 0){
            printf("%c",name[length]);
            if (length != 0){
                printf(" * ");
            }
            length--;
        }//take user input from array and print in reverse order

        do{//input validation
            printf("\nWould you like to try again(y/n)?");
            scanf("\n%c", &run);
        }while((run != 'n') && (run != 'N') && (run != 'y') && (run != 'Y'));
    }while(run == 'y' || run == 'Y');

    printf("\nHave a good day!");
    
    return 0;
}
