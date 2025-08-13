/**********************************
Lab 3 - Program 2 - 2d6 dice game
Alexandre Paquette
Date: October 05, 2020

Task:
Create a dice rolling program that rolls 
two six-side dice. Each time the program 
runs, use random numbers to assign a value 
to each dice variable. Output “The player wins” 
message if ever the sum of the two dice is 7 
or 11. Otherwise output “The computer wins” 
and display the sum of the two dice.

At the end of the program ask if the user 
would like to play again. If the user answers “Y” 
have the program start again. Have the program 
keep score and display this score at the end of 
every round. If it is “N”, have the program quit 
and display the final score and a closing remark.
***********************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));        //set random to use time as seed

    int score = 0, roll;
    char input;

    //Main loop for the user to roll 2d6
    do{
        roll = ((rand() % 6)+(rand() % 6))+2;   //roll 2d6

        //ask the user to roll 2d6
        do{
            printf("Press r to roll 2d6:\n");
            scanf("\n%c", &input);

            //checks if the user is using correct inputs
            if((input != 'r') && (input != 'R'))
            printf("Invalid input\n");

        }while((input != 'r') && (input != 'R'));

        printf("You rolled %d\n", roll);
        //Based on the roll, inform the player whether they win or lose.
        if (roll == 7 || roll == 11){
            printf("Congratulations, you win!\n");
            score++;
        }
        else
            printf("Sorry, you lose.\n");

        printf("Your score is %d.\n", score);

        //check to see if the user wants to keep playing
        do{
            printf("\nWould you like to roll again?\nY for yes\nN for no\n");
            scanf("\n%c", &input);

            //checks if the user is using correct inputs
            if((input != 'n') && (input != 'N') && (input != 'y') && (input != 'Y'))
                printf("Invalid input\n");
        }while((input != 'n') && (input != 'N') && (input != 'y') && (input != 'Y'));
    }while (input != 'n' && input != 'N');

    printf("Your final score is %d", score);

    return 0;
}