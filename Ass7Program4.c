// Write a program which accept number from user and display its table.

#include<stdio.h>

void Table(int iNo)
{
   int iNum = 0;
   for ( iNum = 1; iNum <= 10; iNum++)
   {
      printf("%d\n",iNum*iNo);
   } 
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}