/********************************
Test #1 - Times Table
Alexandre Paquette
Date: October 23, 2020

Task:
Build a program that uses a two dimensional array that 
creates and stores the values of the multiplication table 
from 1 to 12 using loops. Then ask the user for a value 
between 1 and 144, and have it search the two dimensional 
array for that value. If it finds the value, have the 
program display the two numbers that multiply to create that value. 
If it is not found, have the program tell the user that they 
have found a “prime” number. Have the program ask the 
user if they would like to try again. If they answer yes, 
have them loop through the program again. If they answer no, 
have the program print the proper closing remarks (i.e. “goodbye”).
*********************************/

#include <stdio.h>

int numMulti(int, int);
int timesTable (int);

int main(void) {
    int numInput;
    char playAgain = 'y';

    //main program, will end if user selects 'n'
    do{
        printf("Please enter a number between 1 and 144.\n");
        scanf("\n%d", &numInput);

        if (numInput > 144 || numInput < 1)
            printf("Invalid Input. \n\a");
        else
            timesTable(numInput);

        //check if the user wants to keep playing, ensure correct input is used
        do{
            printf("Do you want to play again? Y or N\n");
            scanf("\n%c", &playAgain);
        }while((playAgain != 'n') && (playAgain != 'N') && (playAgain != 'y') && (playAgain != 'Y'));
    }while(playAgain == 'y' || playAgain == 'Y');

    printf("Have a good day!");

    return 0;
}

int timesTable (int userInput){
    int timesTable [12][12];
    int checkInput = 0, num1 =1, num2=1;
    char found = 'f';

    //generates a times table 1-12 and simultaneously checks the user's input
    for (int count1=0; count1 <= 11;count1++){
        for (int count2=0; count2 <= 11;count2++){
            timesTable[count1][count2] = num1*num2;
            checkInput = timesTable[count1][count2];
            if (checkInput == userInput){
                printf("%d x %d = %d\n",num1, num2, checkInput);
                found = 't';
            }
            num2++;
        }
        num1++;
        num2 = 1;
    }
    if (found == 'f')
        printf("You've found a prime number!\n");

    return 0;
}