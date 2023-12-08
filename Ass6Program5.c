// Write a program which accept N and print first 5 multiples of N.

#include<stdio.h>

void Display(int iNo)
{
   int iNum = 0;
   for ( iNum = 1; iNum <= 5; iNum++)
   {
      printf("%d\n",iNum*iNo);
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