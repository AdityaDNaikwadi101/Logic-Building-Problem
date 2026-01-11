#include<stdio.h>

void Display(char *str)
{
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[100];

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    Display(Arr);

    return 0;
}