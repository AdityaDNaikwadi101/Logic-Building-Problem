#include<stdio.h>

int SumEvenDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iSum = 0, iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\nEnter number : ");
    scanf("%d", &iValue);

    iRet = SumEvenDigits(iValue);
    printf("Sumation of all even digit are : %d\n", iRet);

    return 0;
}