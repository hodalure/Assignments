// Accept N numbers from user and return the largest number.

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
     int iCnt = 0; 
     int iMin = Arr[0];

     for (iCnt = 0; iCnt < iLength; iCnt++)
     {
        if (Arr[iCnt] > iMin)
        {
            iMin = Arr[iCnt];
        }
        
     }
     return iMin;
     
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0, iLength = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements", iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Minimum(p,iSize);

    printf("Smallest number is %d",iRet);

    free(p);

    return 0;
}