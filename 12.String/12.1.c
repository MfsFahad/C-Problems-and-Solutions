//12.1. Write a program that displays a string (single word)

#include <stdio.h>

int main()
{
    char word[30];

    printf("Give a single word:\n");

    scanf("%[^\n]", word);

    printf("Output:\n%s", word);

    return 0;
}