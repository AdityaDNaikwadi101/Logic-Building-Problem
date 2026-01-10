// Input : 5
//        A     B    C      D       E

#include<stdio.h>

void Display(int iNo)
{
    char ch = 'A';
    int iCnt = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t", ch);
        ch++;
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