//12.6. Write a program that read a line of text and display it in reverse order

#include <stdio.h>

int main()
{
    int i, j, count = 0;

    char line[30];

    printf("Give a line:\n");

    scanf("%[^\n]", line);

    for(i = 0; line[i] != NULL; i++)
    {
         count++;
    }

    for(j=count-1; j>=0; j--)
    {
        printf("%c", line[j]);
    }

    return 0;
}
