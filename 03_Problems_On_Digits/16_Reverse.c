#include<stdio.h>

int Revers(int iNo)
{
    int iRev = 0, iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Revers(iValue);
    printf("Revers number are : %d", iRet);

    return 0;
}