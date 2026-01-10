// Input : 5
//        A     B    C      D       E

#include<stdio.h>

void Display(int iNo)
{
    char ch = '\0';
    int iCnt = 0;
    for(iCnt = 0, ch = 'A'; iCnt < iNo; iCnt++, ch++)
    {
        printf("%c\t*\t", ch);       
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("\nEnter the number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}