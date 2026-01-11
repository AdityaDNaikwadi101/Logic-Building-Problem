#include<stdio.h>

int CheckOccurance(char *str, char ch)
{
    int iCnt = 0, iLast= 0;
    while(*str != '\0')
    {
        if((*str == ch))
        {
            iLast = iCnt + 1;
        }
        iCnt++;
        str++;
    }
    return iLast;
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    printf("\nEnter latter that you want to serch is : ");
    scanf(" %c", &cValue);

    iRet = CheckOccurance(Arr, cValue);

    printf("Last latter are present at %d position\n", iRet);

    return 0;
}