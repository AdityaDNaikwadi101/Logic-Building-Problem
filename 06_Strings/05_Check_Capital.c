#include<stdio.h>

void CheckCapital(char ch)
{
    if((ch >= 65) && (ch <= 90))
    {
        printf("It is Capital later \n");
    }
    else
    {
        printf("It is not Capilal later \n");
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("\nEnter the one character : ");
    scanf("%c", &cValue);

    CheckCapital(cValue);

    return 0;
}