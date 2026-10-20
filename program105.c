
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakPerfect(int iNo)
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
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheakPerfect(iValue);

    if(bRet == true)
    {
        printf(" it is perfrct number\n");
    }
    else
    {
        printf("it is not perfrct number\n");
    }

    return EXIT_SUCCESS;
}

//Time Complexity : O(N/2)