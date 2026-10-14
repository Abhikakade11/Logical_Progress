#include<stdio.h>
#include<stdlib.h>

int main()

{
    
    char sName[30];
    int iAge = 0;
    float fMakrs = 0.0f;

    printf("Enter Your Name :\n");
    scanf("%[^'\n']s",sName);      //Enter Remains in input Buffer  

    printf("Enter Your Age :\n");
    scanf("%d",&iAge);

    printf("Enter your Marks :\n");
    scanf("%f",&fMakrs);

    printf("Welcome :%s\n",sName);
    printf("Your age is :%d\n",iAge);
    printf("Your Marks is :%f\n",fMakrs);

    return EXIT_SUCCESS;

}  

