#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);
    printf("String length is : %d", iRet);

    return 0;
}