// Write a program to find factorial of given number.

#include<stdio.h>

int Factorial(int iNo)
{
    int iNum = 0, result = 1;
    for ( iNum = 2; iNum <= iNo; ++iNum)
    {
        result *= iNum;
    }
    return result;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}