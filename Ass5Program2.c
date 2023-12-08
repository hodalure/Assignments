// Write a program which accept one number from user and check whether that number is greater than 100 or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckGreater(int iNo)
{
    if(iNo >= 100)
    {
        return true;
    }
    return false;

}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Please enter number");
    scanf("%d",&iValue);
    bRet = CheckGreater(iValue);
    if (bRet)
    {
        printf("Greater");
    }
    else{
        printf("Smaller");
    }
    
}