// Write a program which accepts N from user and print all odd numbers up to N.

#include<stdio.h>

void OddDisplay(int iNo)
{
   int iNum = 0;
   for (iNum = 1; iNum <= iNo; iNum++)
   {
      if (iNum%2 != 0)
      {
         printf("%d\n",iNum);
      }
      
   }
   
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}