// Write a program which accept number from user and return the count of even digits.

#include<stdio.h>

int CountEven(int iNo)
{
    int iTemp, count = 0;

	while (iNo > 0) {

		iTemp = iNo % 10;	

		if (iTemp % 2 == 0) {
			count++;
		}

    }
	return count;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}