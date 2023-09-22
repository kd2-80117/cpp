/************************ ASSIGNMENT 1 QUESTION 1 *********************************/

// Q1. Write a menu driven program for Date in a C. 
// Declare a structure Date having data members day, month, year. 
// Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate);
// void acceptDateFromConsole(struct Date* ptrDate);


#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate)
{
       ptrDate->day=0;
       ptrDate->month=0;
       ptrDate->year=0;
}

void printDateOnConsole(struct Date *ptrDate)
{
    printf("Date is : %d-%d-%d\n", ptrDate->day,ptrDate->month,ptrDate->year);
}

void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("\nEnter day,month and year:");
    scanf("%d %d %d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

int main()
{
    struct Date dt;
    
    int choice = 0;
    do
    {   
        printf("\nMenu\n1.Initial Date\n2.Print Date\n3.Accept Date\n0.Exit\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            initDate(&dt);
            break;
        case 2:
            printDateOnConsole(&dt);
            break;
        case 3:
            acceptDateFromConsole(&dt);
            break;
        case 0:
            break;
        default:
            break;
        }
    } while (choice);

    return 0;
}