#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char *str, char ch)
{
    int iCnt = 0;
    bool bFlag = false;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    printf("\nEnter character that you want to serch : ");
    scanf(" %c",&cValue);

    iRet = CheckOccurance(Arr, cValue);

    if(iRet != -1)
    {
        printf("Character is present at %d position\n", iRet);
    }
    else
    {
        printf("Character is not present in string\n");
    }

    return 0;
}