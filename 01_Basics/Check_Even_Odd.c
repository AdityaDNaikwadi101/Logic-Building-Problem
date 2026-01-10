#include<stdio.h>
#include<stdbool.h>

// User is going to enter only positve inputs

// Algorithom : 
/*
        START
            Accept one number as No
            Divide that number No by 2
            If reminder is 0
            then display the result as Even number
            otherwise display the result as Odd number 
        STOP
*/

///////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description :   Used to check whether number is even or odd
// Input :         Integer
// OutPut :        Boolean
// Author :        Aditya Dnyaneshwar Naikwadi
// Date :          13/09/2025
//
/////////////////////////////////////////////////////////////////////////// 

bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo % 2) == 0)
    {   return true;    }
    else
    {   return false;   }
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%u", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n ",iValue);
    }
    return 0;
}