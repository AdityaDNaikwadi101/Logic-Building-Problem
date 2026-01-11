#include<stdio.h>

int CheckVowel(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("\nEnter the string : ");
    scanf("%[^'\n']s", Arr);

    iRet = CheckVowel(Arr);
    printf("Number of vowel is : %d\n", iRet);

    return 0;
}