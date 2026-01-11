#include<stdio.h>

int CheckOccurance(char *str, char ch)
{
    int iCnt = 0, iLast = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLast = iCnt;
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

    printf("Enter string : ");
    scanf("%[^'\n']s", Arr);

    printf("\nEnter latter that you want to serch : ");
    scanf(" %c", &cValue);

    iRet = CheckOccurance(Arr, cValue);
    if(iRet == -1)
    {
        printf("There is no such letter\n");
    }
    else
    {
        printf("Last occurance of the letter possition is %d\n", iRet);
    }

    return 0;
}