// Write a program which accept number from user and check whether it contains o in it or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
     while(iNo > 0) {
        if(iNo % 10 == 0)
            return true;
        iNo /= 10;
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if (bRet == true)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    
    return 0;
}