/******************************************************************************
Lab 7 - Pointer Address Checker
Alexandre Paquette
Date: November 11, 2020

Task:
Create a program in which allows the user to select one of the following four menu operations:
• Enter a New Integer Value
• Print Pointer Address
• Print Integer Address
• Print integer Value
For this program you need to create two variables:
• one integer data type
• one pointer
Using indirection, assign any new integer value that the user enters through an appropriate pointer
Have the program ask if the user would like to try again, and loop accordingly.
*******************************************************************************/

#include <stdio.h>

int main(void) {
    int numInput;
    char select = '0';
    int *ptrInput = &numInput;

    do{
        printf("\nSelect one of the following options:\n1 - Enter a new Integer Value\n2 - Print Pointer Address\n3 - Print Integer Address\n4 - Print Integer Value\n5 - Exit\n\n");
        scanf("\n%c",&select);

        switch (select){
            case '1':         //Enter a new integer
                printf("\nEnter a whole number: \n");
                scanf("\n%d",ptrInput);
                break;

            case '2':         //Print Pointer Address
                printf("\nThe Pointer Address is %p.\n",ptrInput);
                break;

            case '3':         //Print Integer Address
                printf("\nThe Integer Address is %p.\n",&numInput);
                break;

            case '4':         //Print Integer Value
                printf("\nThe Integer Value is %d\n",*ptrInput);
                break;

            case '5':         //end program
                printf("\nHave a good day!");
                break;

            default:          //invalid input
                printf("\n\a!!!Invalid Input!!!\n");
                break;
        }
    }while(select != '5');

    return 0;
}