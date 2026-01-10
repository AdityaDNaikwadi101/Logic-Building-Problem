#include<stdio.h>

int DisplayFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter the number : ");
    scanf("%d", &iValue);

    iRet = DisplayFactorial(iValue);
    printf("Factorial of %d is : %d\n", iValue, iRet);

    return 0;
}