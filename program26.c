#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter Your Name :\n");
    scanf("%[^'\n']s",sName);      //Special scanf accept the input until enter

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}