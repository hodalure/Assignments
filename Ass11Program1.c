// Write a program which accept number from user and display its digits in reverse order.

#include<stdio.h>

int DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
       iRev = (iRev * 10) + iDigit;
    }
    return iRev;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = DisplayDigit(iValue);
    printf("Reverse number is : %d\n", iRet);


    return 0;
}