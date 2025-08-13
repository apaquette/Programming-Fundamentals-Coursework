/******************************************************************************
Lab 9 - Contact Manager
Alexandre Paquette
Date: November 27, 2020

Task:
Create a program that uses a structure array to hold contact information for your 
friends (name, phone, email, years of friendship ). The program should have a 
menu that allow the user to enter data( )up to five friends or print the current 
entries. Do not print entries that are invalid or null. Have the program loop 
until the user decides to exit.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>   //allows the use of system function

typedef struct contact{//contact variable
    char name[50],email[100], phone[100];
    int yof, check;
}cntct;

void enterData(cntct *contact){//take contact data from user
    printf("Enter your friend's name: ");
    scanf("\n%s", contact->name);
    printf("Enter your friend's phone number: ");
    scanf("\n%s", contact->phone);
    printf("Enter your friend's email: ");
    scanf ("\n%s", contact->email);
    printf("Enter how many years you've know your friend: ");
    scanf ("\n%d",&contact->yof);
    contact->check = 1;
    system("clear");
}

void printData(cntct *contact){//print currently stored data
    printf("\nCurrent Entries:\n");
    int x=0;
    for (x=0;contact[x].check != 0 && x<5; x++)
        printf("\nName: %s\nPhone number: %s\nEmail: %s\nYear(s) of Friendship: %d\n",contact[x].name, contact[x].phone, contact[x].email, contact[x].yof);
    if (x == 0)
        printf("There are no entries.\n\r");
    printf("\n");
}

int checkPosition(cntct *contact){//check the current position in the array
    int x = 0;
    while (contact[x].check != 0)
        x++;
    return x;
}

int main(void) {//main function
    char select = '0';
    cntct contacts[5] = {0};
    int next = 0;

    int num;
    do{//main menu loop
        printf("Select one of the following options:\n1 - Add a contact\n2 - View Current Entries\n3 - Exit\n\n");
        scanf("\n%c",&select);
        system("clear");
        switch (select){
            case '1':         //Enter Data (up to 5)
                next = checkPosition(contacts);
                if (next <5)
                enterData(&contacts[next]);
                else
                printf("\nYour contacts are full.\n");
                break;

            case '2':         //Print current Entries
                printData(contacts);
                break;

            case '3':         //Exit
                break;

            default:          //invalid input
                printf("\n\a!!!Invalid Input!!!\n");
                break;
        }
    }while(select != '3');

    printf("\nHave a good day!");

    return 0;
}