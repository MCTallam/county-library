/*
Project: County Library System
Author: Maureen Chebet Tallam
Date: 26/02/2022
Compiler:GNU GCC
Language: C99
License: MIT
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    char name [20];
    printf ("Enter your name: ");
    fgets (name , 20, stdin);
    printf("Welcome %s To COUNTY LIBRARY SYSTEM\n", name);


    int action;
        printf("What would you like to do?\n");
        printf("1.Add new User\n");
        printf("2.Add book.\n");
        printf("3.Borrow book.\n");
        printf("4.Return Book.\n");
        printf("5.Books borrowed.\n");
        printf("6.Delete members.\n");
        printf("selected action: ");
        scanf("%d",&action);
        return action;


    return 0;
}


