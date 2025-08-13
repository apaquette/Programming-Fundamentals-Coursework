/******************************** 
Lab 3 - Program 1 - Magic 8-ball (Version 2) 
Alexandre Paquette 
Date: October 05, 2020

Task:
Create a “magic eight ball” program in which 
the user can verbally ask the computer a question 
and push “Q” and the computer will randomly select 
one of the eight answers you have programmed into it. 
Then have the program ask if the user would like to 
play again. If the user answers “Y” have the 
program start again. If it is “N”, have the 
program quit and display a closing remark.
*********************************/ 
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void) { 
    srand(time(NULL));        //set random to use time as seed 

    int num; 
    char input;               //variable to store user's input 
    char answers[10][100] = {"Without a doubt.","Most likely.","Outlook good.","As I  see it, yes.","Ask again later.","Cannot predict now.","Outlook not so good.","Very doubtful."};              //array that stores all possible answers

    //main loop allowing the user to ask the 8-ball questions 
    do{ 
        num = rand() % 8;       //generate a number between 0-7 (8 options altogether) 
        //loop that verifies the user is entering 'q' correctly 
        do{ 
            printf("\nAsk the computer a question, then press Q:\n"); 
            scanf("\n%c", &input);     //use a character variable to accept enter from the user 

            //checks if the user is using valid inputs 
            if (input != 'q' & input != 'Q') 
            printf("Invalid input\n"); 

        }while((input != 'q') && (input != 'Q')); 

            printf("%s", answers[num]);   //Output 8-ball answer based on generated number between 0-7 

            //loop that verifies the user is entering 'y' or 'n' correctly 
            do{ 
                printf("\nWould you like to ask another question?\nY for yes\nN for no\n"); 
                scanf("\n%c", &input); 

                //checks if the user is using correct inputs 
                if((input != 'n') && (input != 'N') && (input != 'y') && (input != 'Y')) 
                    printf("Invalid input\n");
        }while((input != 'n') && (input != 'N') && (input != 'y') && (input != 'Y')); 
    }while((input != 'n') && (input != 'N')); //so long as the user doesn't input n, the program continues 

    printf("Fate be with you."); 
    return 0;
}