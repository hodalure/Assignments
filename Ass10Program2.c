// Write a program which accept range from user and display all even numbers in between that range.

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iNum = 0;

    if(iStart%2 != 0)
    {
        iStart++;
    }
    for (iNum = iStart; iNum <= iEnd; iNum+=2)
    {
       printf("%d\n",iNum);

    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}