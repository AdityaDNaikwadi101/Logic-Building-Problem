#include<stdio.h>
#include<stdlib.h>

int Divisible(int Arr[], int iSize)
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iSize; i++)
    {
        if(((Arr[i] % 5) == 0) && (Arr[i] % 3) == 0)
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

    iRet = Divisible(Brr, iCount);
    printf("Number of elemet are divisible by 5 & 3 are : %d\n", iRet);

    free(Brr);

    return 0;
}