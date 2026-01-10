//  Problem Statement : Accept two number and perform addition

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
// Function Name :  Addition
// Description :    it is used to perform addition of 2 floats
// Input :          Float, Float
// OutPut :         Float
// Author :         Aditya Dnyaneshwar Naikwadi
// Date :           12/09/2025
//
//////////////////////////////////////////////////////////////////

float Addition(float fNo1, float fNo2)
{
    float fAns = 0.0;
    fAns = fNo1 + fNo2;
    return fAns;
}

////////////////////////////////////////////////////////////////
// Function Name :  main
// Description :    Its a entry point function 
///////////////////////////////////////////////////////////////

int main()
{
    float fValue1, fValue2 = 0.0;
    float fResult = 0.0;
    
    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1, fValue2);

    printf("Addition is : %f\n",fResult);

    return 0;
}

// Steps 5 : Test the program
// Test case

// Input 1 = 10.0   Input 2 = 20.0  Result = 30.0
// Input 1 = 10.0   Input 2 = 0.0  Result = 10.0
// Input 1 = 0.0   Input 2 = 10.0 Result = 10.0
// Input 1 = 0.0   Input 2 = 0.0  Result = 0.0
// Input 1 = 10.0   Input 2 = -7.0  Result = 3.0
// Input 1 = -10.0   Input 2 = 7.0 Result = -3.0
// Input 1 = -10.0   Input 2 = -7.0  Result = -17.0
