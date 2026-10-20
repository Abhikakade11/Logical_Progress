#include<stdio.h>
#include<stdlib.h>

void CheakDivisible(int iNo)
{

    // Logic
    if((iNo % 5) == 0 )
    {
        printf("It is Divisible : ");
    }
    else
    {
        printf("It is Not Divisible : ");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter A Number :\n");
    scanf("%d",&iValue);

    CheakDivisible(iValue);

    return EXIT_SUCCESS;
}