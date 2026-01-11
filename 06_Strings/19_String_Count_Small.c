#include<stdio.h>

int strlenSmallX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    iRet = strlenSmallX(Arr);
    printf("Number of small latter is : %d\n",iRet);

    return 0;
}