//12.10. Write a program that read any line of text and display every character with ASCII value in separate line

#include <stdio.h>

int main()
{
    char line[30];

    int i;

    printf("Give a line:\n");

    scanf("%[^\n]", line);

    for(i=0; line[i] != NULL; i++)
    {
        printf("ASCII value of  %c = %d\n", line[i], line[i]);
    }

    return 0;
}
