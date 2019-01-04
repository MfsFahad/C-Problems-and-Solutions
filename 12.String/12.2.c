//12.2. Write a program that displays a string (a line)

#include <stdio.h>

int main()
{
    char line[30];

    printf("Give a line:\n");

    scanf("%s", line);

    printf("Output:\n%s", line);

    return 0;
}
