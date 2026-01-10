#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description :   Used to display 1/2 numbers that you pass in sequence 1
// Input :         Integer
// Output :        Integer
// Author :        Aditya Dnyaneshwar Naikwadi
// Date :          03/10/2025
//
//////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    char iCnt = 0;
    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number that you want to print on screen : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}