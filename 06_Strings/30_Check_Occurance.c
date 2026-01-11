#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str, char ch)
{
    bool bFlag = false;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{   
    char Arr[100];
    char cValue;
    bool bRet = false;

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    printf("\nEnter character that you want to serch : ");
    scanf(" %c", &cValue);

    bRet = CheckOccurance(Arr, cValue);

    if(bRet == true)
    {
        printf("Character is present in string\n");
    }
    else
    {
        printf("Character is not present in string\n");
    }

    return 0;
}