#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo >= 10) && (iNo <= 20))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number that you want to check its beetween range or not : ");
    scanf("%d", &iValue);
    
    bRet = CheckRange(iValue);

    if(bRet == true)
    {
        printf("%d Number is beetween the range of 10 to 20 \n", iValue);
    }
    else
    {
        printf("%d Number is not in the range of 10 to 20 \n", iValue);
    }

    return 0;
}