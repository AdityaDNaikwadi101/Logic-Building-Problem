#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str)
{
    bool bFlag = false;
    while(*str != '\0')
    {
        if((*str == 'l'))
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
    bool bRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    bRet = CheckOccurance(Arr);

    if(bRet == true)
    {
        printf("l is present in string \n");
    }
    else
    {
        printf("l is not present in string \n");
    }

    return 0;
}