// Write a program which accept number from user and print that number of $ & * on screen.

#include<stdio.h>

void Pattern(int iNo)
{
    int iNum = 0;
    for ( iNum = 0; iNum <= iNo; iNum++)
    {
        printf("$ *",iNum);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}