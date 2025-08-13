/******************************************************************************
Test 2a - Class Grades Program
Alexandre Paquette
November 27, 2020

Task:
You must solve all 15 logical and syntax errors, and get the programs up 
and running
*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float marks;
} s[5];

void printAverage(float);

int main()
{
    int i;
    float totalMark =0;

    printf("Enter information of students:\n");
 
    // storing information
    for(i=0; i<5; ++i)
    {
        s[i].roll = i+1;
        printf("\nFor roll number %d,\n",s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        printf("\n");
    }

    //Displaying Information
    printf("\nName\t\t\t\t   Mark");
    printf("\n*****************************");
    for(i=0; i<5; ++i)
    {
        printf("\n%d. %s\t\t\t\t%.1f", s[i].roll, s[i].name, s[i].marks);
        totalMark += s[i].marks;
    }
   printAverage(totalMark);

   return 0;
}

void printAverage(float mark)
{
    printf("\n\nCLASS AVERAGE : \t\t %.1f", mark/5);
}
