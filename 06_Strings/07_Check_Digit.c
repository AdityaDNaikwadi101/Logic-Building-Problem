#include<stdio.h>
#include<stdbool.h>

void CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        printf("It is Digit \n");
    }
    else
    {
        printf("It is not Digit \n");
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("\nEnter the one character : ");
    scanf("%c", &cValue);

    CheckDigit(cValue);

    return 0;
}