// Accept number of rows and number of columns from user and display below pattern.

/*
     A   B   C   D
     A   B   C   D
     A   B   C   D
     A   B   C   D
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
     int i = 0, j = 0;
     char ch = 'A';

     for (i = 1; i <= iRow; i++,ch++)
     {
        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch,j);
        }
        printf("\n");
        
     }
     
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}