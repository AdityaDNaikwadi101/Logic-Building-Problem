#include<stdio.h>

int CountVowel(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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

    iRet = CountVowel(Arr);
    printf("Number of vowel are : %d", iRet);

    return 0;
}