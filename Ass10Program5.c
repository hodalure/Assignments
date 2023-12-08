// Write a program which accept range from user and display all numbers in between that
// range in reverse order.

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iNum = 0;
    for(iNum = iStart; iNum <= iStart; iNum--)
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

    RangeDisplay(iValue1,iValue2);

    return 0;
}