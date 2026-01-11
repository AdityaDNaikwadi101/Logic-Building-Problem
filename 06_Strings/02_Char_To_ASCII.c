#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("\nEnter the one character : ");
    scanf("%c", &ch);

    printf("Entered character is : %c\n", ch);

    printf("Entered character ASCII value is : %d\n", ch);

    return 0;
}