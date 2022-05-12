#include <stdio.h>


int talk()
{
    char name[20];

    printf("What is your name?\n");

    //get string input. Note that We are not using &name here.   
    scanf_s("%s", name, 20);

    //print the name
    printf("Welcome to you computer, %s\n", name);

    return 0;
}
