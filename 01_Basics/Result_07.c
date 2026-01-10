#include<stdio.h>

//User defind
#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASS 2
#define RET_SECOND 3
#define RET_FIRST 4
#define RET_DISTINCTION 5

int DisplayResult(float fMarks)
{
    if((fMarks < 0) || (fMarks > 100))
    {
        return RET_INVALID;
    }
    if((fMarks >= 0) && (fMarks < 35))
    {
        return RET_FAIL;
    }
    else if((fMarks >= 35) && (fMarks < 50))
    {
        return RET_PASS;
    }
    else if((fMarks >= 50) && (fMarks < 60))
    {
        return RET_SECOND;
    }
    else if((fMarks >= 60) && (fMarks < 75))
    {
        return RET_FIRST;
    }
    else if((fMarks >= 75) && (fMarks <= 100))
    {
        return RET_DISTINCTION;
    }
} 

int main()
{
    float fValue = 0.0f;
    int bRet = 0;

    printf("Please enter your percentage\n");
    scanf("%f", &fValue);

    bRet = DisplayResult(fValue);

    switch(bRet)
    {
        case RET_INVALID:
            printf("Your enter number is invalide\n");
        break;

        case RET_FAIL:
            printf("Student is FAIL\n");
        break;

        case RET_PASS:
            printf("Student is having PASS CLASS\n");
        break;

        case RET_SECOND:
            printf("Student is having SECOND CLASS\n");
        break;

        case RET_FIRST:
            printf("Student is having FIRST CLASS\n");
        break;
        
        case RET_DISTINCTION:
            printf("Student is having FIRST CLASS WITH DISTICTION\n");
        break;
    }

    return 0;
}    