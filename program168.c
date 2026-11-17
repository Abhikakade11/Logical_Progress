

#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iCount = 0;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo /10;
        iCount++;
    
    }
    return iSum / iCount;
    
}

int main()
{   
    
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digits : %f\n",fRet);

    return EXIT_SUCCESS;
}























