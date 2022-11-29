#include<stdio.h>
#include<string.h>
int main()
{
    char first[100], second[100];

    printf("Enter First String: ");
    gets(first);

    printf("Enter Second String: ");
    gets(second);

    puts(strcat(first, second));

    return 0;
}