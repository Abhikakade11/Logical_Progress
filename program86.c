/*
----------------------------------

          operatin ||
-------------------------------------

result1       result2       resultfinal
------------------------------------
true              true          true   short circuit
true              false         true   short circuit
false             true          true
false             false         false
--------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheakDivisible(int iNo)
{

    // Logic
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf("It is Divisible\n");
    }

    else
    {
        printf("It is Not Divisible\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheakDivisible(iValue);

    return EXIT_SUCCESS;
}