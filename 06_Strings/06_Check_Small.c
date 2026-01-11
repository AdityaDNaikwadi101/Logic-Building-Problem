#include<stdio.h>
#include<stdbool.h>

void CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        printf("It is Small later \n");
    }
    else
    {
        printf("It is not Small later \n");
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("\nEnter the one character : ");
    scanf("%c", &cValue);

    CheckSmall(cValue);

    return 0;
}