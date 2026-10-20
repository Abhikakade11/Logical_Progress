
#include<stdio.h>
#include<stdlib.h>

void CheakPerfect(int iNo)
{

    int iCnt = 0;
    int iSum = 0;


    for(iCnt = 1; iCnt <= iNo/2; iCnt++) 
    {

        if((iNo % iCnt) == 0)
        {
            iSum=iSum+iCnt;
        }
    }
    if(iSum == iSum)
    {
        printf("Perfect Number:",iSum);
    }
    else
    {
        printf("It is not perfrct number :\n");
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheakPerfect(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N/2)