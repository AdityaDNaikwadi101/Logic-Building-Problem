#include<stdio.h>
#include<stdlib.h>

void Updater(int *Arr, int iSize)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        (Arr[i])++;
    }
}

int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL;

    printf("\nEnter the number of element that you want : ");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the element : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    Updater(Brr,iCount);

    printf("\nUpdated Array is : ");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\t", Brr[i]);
    }

    free(Brr);

    return 0;
}