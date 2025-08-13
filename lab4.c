/********************************
Lab 4 - Number Multiplier
Alexandre Paquette
Date: October 09, 2020

Task:
Part a
    Create a program that asks the user
    for two integers to multiply. Have 
    the program multiply the two numbers 
    and tell the user the answer.

Part b
    Instead of having the main() Function do 
    everything, have the main() function send 
    those two numbers to a function called 
    “multiplyTwoNumbers”. The function should 
    receive the two parameters and return the 
    product of those two numbers multiplied together.

Part c
    Now create another function called “getNumber” 
    that receives no parameters, but asks the user 
    for a number, and returns that number. Have 
    your program call this function twice to get 
    the two numbers from the user at the beginning 
    of the program.
*********************************/

#include <stdio.h>

//initialize functions
int multiplyTwoNumbers(int,int);
int getNumbers();

int main(void) {
    int numbers [2];        //array that will contain two numbers from user

    printf("This program will multiply two numbers.\n");

    //get input from user
    for (int count = 0; count <=1;){
        numbers[count] = getNumbers();
        count++;
    }//end for loop

    printf("%d x %d = %d", numbers[0], numbers[1], multiplyTwoNumbers(numbers[0], numbers[1]));   //print out results

    return 0;
}//end main

    //function to multiply two numbers
int multiplyTwoNumbers(int num1, int num2){
    return num1*num2;
}//end multiplyTwoNumbers

//function to get user input
int getNumbers(){
    int userInput;
    printf("Please enter a number:\n");
    scanf("%d", &userInput);
    return userInput;
}//end getNumbers