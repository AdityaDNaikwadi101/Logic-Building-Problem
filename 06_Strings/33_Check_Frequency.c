#include<stdio.h>

int CheckFrequency(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter character that yoy want to serch : ");
    scanf(" %c", &cValue);

    iRet = CheckFrequency(Arr, cValue);

    printf("Number of latter frequency are present in string are : %d\n", iRet);

    return 0;
}