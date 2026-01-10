#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    while(iCnt < iNo)
    {
        printf("Jay Hanuman...\n");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to diaplay Jay Hanuman on screen : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}