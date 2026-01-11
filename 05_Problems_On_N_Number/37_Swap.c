#include<stdio.h>

void Swap(int *iStart, int *iEnd)
{
    int temp = 0;

    temp = *iStart;
    *iStart = *iEnd;
    *iEnd = temp;
}

int main()
{
    int A, B = 0;

    printf("Enter the first numbrt : ");
    scanf("%d", &A);

    printf("Enter the second number : ");
    scanf("%d", &B);

    Swap(&A, &B);

    printf("Value of A After updation : %d\n", A);
    printf("Value of B After updation : %d\n", B);

    return 0;
}