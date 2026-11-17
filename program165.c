#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iNo % 2) != 1)
        {
            printf("It is Even Number : %d\n",iDigit);
        }
        else
        {
            printf("It is Odd Number : %d\n",iDigit);
        }
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayEvenOddDigits(iValue);

    return EXIT_SUCCESS;
}