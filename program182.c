#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("$\t");
        iCnt++;
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter Frequency :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
