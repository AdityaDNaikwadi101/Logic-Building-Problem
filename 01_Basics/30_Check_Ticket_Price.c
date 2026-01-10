#include<stdio.h>


/////////////////////////////////////////////////////////////
//
// Function Name : CalculateTicket
// Description :   Used to display ticket price base on age
// Input :         Integer
// Output :        Integer
// Author :        Aditya Dnyaneshwar Naikwadi
// Date :          02/10/2025
//
/////////////////////////////////////////////////////////////

int CheckPrice(int iAge)
{
    if((iAge >= 0) && (iAge <= 4))
    {    return 0;    }
    else if((iAge >= 5) && (iAge <= 10))
    {    return 500;    }
    else if((iAge >= 11) && (iAge <= 18))
    {    return 900;    }
    else if((iAge >= 18) && (iAge <= 50))
    {   return 2100;    }
    else if(iAge >= 51) 
    {    return 600;    }

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your age : ");
    scanf("%d", &iValue);

    iRet = CheckPrice(iValue);
    printf("Your ticket price is : %dRs\n", iRet);

    return 0;
}