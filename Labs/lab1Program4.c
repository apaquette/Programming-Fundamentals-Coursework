/****************************************
Lab 1 - Program 4 - Commissions
Author: Alexandre Paquette
Date: September 25, 2020

Task:
Build a Car dealer commission program that 
prompts the user for the data and determines 
the commission for a merchant selling gear 
using the following formula:
    Commission = Rate * (Sales Price - Cost)
****************************************/

#include <stdio.h>

int main(void){
    //floats were used since there may be decimal values
    float rate;
    float salesPrice;
    float cost;

    printf("Please enter the rate.\n");
    scanf("%f", &rate);

    printf("Please enter the sales price.\n");
    scanf("\n%f", &salesPrice);

    printf("Please enter the cost.\n");
    scanf("\n%f", &cost);

    float commission = rate * (salesPrice - cost);

    printf("The commission for this sale will be $%.2f.\n", commission);

    return 0;
}