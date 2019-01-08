//12.9. Write a program that read any line of text and display every character in separate line

#include <stdio.h>

int main()
{
    char line[30];

    int i;

    printf("Give a line:\n");

    scanf("%[^\n]", line);

    for(i=0; line[i] != NULL; i++)
    {
        printf("%c\n", line[i]);
    }

    return 0;
}