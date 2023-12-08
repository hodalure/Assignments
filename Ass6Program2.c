// Write a program which accept number from user and print numbers till that number.

#include<stdio.h>

void Display(int iNo)
{
   int iNum = 0;
   for ( iNum = 1; iNum <= iNo; iNum++)
   {
      printf("%d\n",iNum);
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