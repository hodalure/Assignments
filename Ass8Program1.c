// Write a program which accept number from user and display below pattern.

#include<stdio.h>

void Display(int iNo)
{
    int iNum = 0;
    for ( iNum = 1; iNum <= iNo; iNum++)
    {
        int num = iNum;
        while(num > 1){
            printf("*");
            num--;
        };
        num = iNum;
        while(num > 1){
            printf("*");
            num--;
        };

    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}