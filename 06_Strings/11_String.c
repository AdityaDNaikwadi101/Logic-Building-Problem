#include<stdio.h>

int main()
{
    char Arr[50];

    printf("\nEnter you full name : ");
    scanf("%[^'\n']s",Arr);

    printf("Hello %s\n",Arr);


    return 0;
}