
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iRev == iNo)          // issue
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

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheakPalindrome(iValue);

    if(bRet == true)
    {
        printf("It is Palindrome ");
    }
    else
    {
        printf("It is not Palindrome ");
    }

    return EXIT_SUCCESS;
}
