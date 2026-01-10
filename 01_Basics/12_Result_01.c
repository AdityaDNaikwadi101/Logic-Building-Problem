#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{
    if((fMarks >= 0.0) && (fMarks < 35.0))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    float fValue = 0.0f;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%f",&fValue);

    bRet = DisplayResult(fValue);
    if(bRet == true)
    {
        printf("Student is pass in the exam\n");
    }
    else
    {
        printf("Student is fail in the exam\n");
    }

    return 0;
}