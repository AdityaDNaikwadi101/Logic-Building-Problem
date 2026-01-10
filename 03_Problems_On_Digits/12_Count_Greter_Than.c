#include<stdio.h>

int Count(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 5)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Count(iValue);
    printf("Number of digits are greater than 5 are : %d", iRet);

    return 0;
}