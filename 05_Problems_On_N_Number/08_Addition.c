#include<stdio.h>

int Addition(int *ptr, int iSize)
{
    int iSum = 0, i = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + ptr[i];
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int i = 0, iRet = 0;

    printf("Enter the element : \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &Arr[i]);
    }

    iRet = Addition(Arr, 5);
    printf("Addition is : %d", iRet);

    return 0;
}