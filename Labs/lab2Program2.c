/********************************** 
Lab 2 - Program 2 - 2D6 dice game 
Alexandre Paquette 
Date: September 30, 2020 

Task:
Create a dice rolling game that rolls 
two six-side dice. Each time the 
program runs, use random numbers to 
assign a value to each dice variable. 
Output “The player wins” message if 
ever the sum of the two dice is 7 or 
11. Otherwise output the sum of the two 
dice and thank the user for playing.
***********************************/ 
 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main(void) { 
    srand(time(NULL));                              //set random to use time as seed 

    int roll2D6 = ((rand() % 6)+(rand() % 6))+2;    //roll 2D6 and add them up 
    char skip; 

    printf("Press Enter to roll 2D6:"); 
    scanf("%c", &skip);                             //use a character variable to accept enter from the user 

    //Based on the roll, inform the player whether they win or lose. 
    if (roll2D6 == 7 || roll2D6 == 11)
        printf("Congratulations, you win!"); 
    else
        printf("Sorry, you lose.");

    return 0; 
}