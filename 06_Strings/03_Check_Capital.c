#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("\nEnter the one character : ");
    scanf("%c", &cValue);

    bRet = CheckCapital(cValue);
    if(bRet == true)
    {
        printf("It is capital later \n");
    }
    else
    {
        printf("It is not capital later \n");
    }

    return 0;
}