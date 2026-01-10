#include<stdio.h>

void Display(int iNo)
{
    char iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number that you want to print on screen : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}