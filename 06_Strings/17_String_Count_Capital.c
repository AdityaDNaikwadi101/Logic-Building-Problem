#include<stdio.h>

int strlenCapX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <=  'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[1024];
    int iRet = 0;

    printf("\nEnter the string : ");
    scanf("%[^'\n']s", Arr);

    iRet = strlenCapX(Arr);
    printf("Number of capital latters are : %d\n", iRet);

    return 0;
}