#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int i = 0, iCount = 0, iRet = 0;
    int *Brr = NULL; 

    printf("\nEnter the number of element that you want : ");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the element : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = CountOdd(Brr, iCount);
    printf("Count of Odd number are : %d\n", iRet);

    free(Brr);

    return 0;
}