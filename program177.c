#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakPalindrome(int iNo)
{

    int iDigit = 0;
    int iRev= 0;
    int iTemp = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }    
    if(iRev == iTemp)
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

    bRet = CheakPalindrome(iValue);

    if(bRet == true)
    {
        printf("It is Palindrome Number :");
    }
    else
    {
        printf("It is Not Palindrome Number :");
    }


    return EXIT_SUCCESS;

}