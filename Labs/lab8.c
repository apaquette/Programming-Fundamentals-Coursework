/******************************************************************************
Lab 8 - String Searcher
Alexandre Paquette
Date: November 26, 2020
*******************************************************************************/

#include <stdio.h>
#include <string.h>     //for string search function
#include <ctype.h>      //for lowercase conversion function

int main(void) {
    char playAgain = 'y';

    printf("Welcome to the famous phrase searcher.\n");
    do{
        char search[100], *phrase = "A computer once beat me at chess, but it was no match for me at kick boxing!";
        int count=0;

        printf("\nPlease enter a string for you to search:\n");
        scanf ("\n%s",search);

        for(int x = 0; x <= strlen(search); x++ )
            search[x] = tolower(search[x]);

        while ((phrase=strstr(phrase, search)) != NULL){//counts the number of occurrences found
            count++;
            phrase++;
        }

        switch (count){
            case 0:
                printf("\nNo patter was found.\n");
            case 1:
                printf("\nA pattern was found %d time!\n",count);
            default:
                printf("\nA pattern was found %d times!\n",count);
        }

        do{//input validation
            printf("Play again? (y/n)\n");
            scanf("\n%c",&playAgain);

            if(tolower(playAgain)!='y' && tolower(playAgain)!='n')
                printf("\n\a!!!Invalid Input!!!\n");
        }while(tolower(playAgain) != 'y' && tolower(playAgain) != 'n');
    }while(tolower(playAgain) == 'y');

    printf("\nHave a good day!");

    return 0;
}