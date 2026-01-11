#include<stdio.h>
#include<stdlib.h   >

void Display(int Arr[], int iSize)
{
    int i = 0;
    printf("Odd number are : ");
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2 != 0))
        {
            printf("%d\t",Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL;

    printf("Enter the number of elemet are : ");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the element : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }
    
    Display(Brr, iCount);

    free(Brr);

    return 0;
}