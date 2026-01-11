#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL;

    printf("Enter the number of element that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *) malloc(iCount * sizeof(int));

    printf("Enter the number of element : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    printf("Entered element are : \n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\t", Brr[i]);
    }

    free(Brr);

    return 0;
}