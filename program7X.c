void Addition(int ino1, int ino2)
    {
        int iAns = 0;

        iAns = ino1 + ino2;           // Bussiness logic

        printf("Addition is :%d\n",iAns);
    }

    ////////////////////////////////////////////////////
    //
    // Entry point of the Application
    //
    ////////////////////////////////////////////////////
int main ()

{
    int  iValue1 = 0, iValue2 = 0;
    
    printf("Enter 1st Number :\n");
    scanf("%d",&iValue1);
    
    printf("Enter 2nd Number :\n");
    scanf("%d",&iValue2);

    Addition(iValue1,iValue2);      

    return 0;

}
