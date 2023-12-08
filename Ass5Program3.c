// Write a program which accept two numbers and check whether numbers are equals or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    return false;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;
    printf("Please enter two numbers");
    scanf("%d %d",&iValue1,&iValue2);
    bRet = CheckEqual(iValue1,iValue2);
    if (bRet)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }
}

