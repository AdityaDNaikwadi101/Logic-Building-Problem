// problem statement : Accept 2 number from user and perform its aadition

#include<stdio.h>

int main()
{
    float fValue1, fValue2 = 0.0f;
    float fResult = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("Addition is : %f\n",fResult);

    return 0;
}