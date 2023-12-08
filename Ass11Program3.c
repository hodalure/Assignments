// Write a program which accept number from user and count frequency of 2 in it.

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iRem = -0;

     while(iNo!=0)
    {

       iRem=iNo%10;

       if(iRem==iDigit)
       
       iNo=iNo/10;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("%d",iRet);

    return 0;
}