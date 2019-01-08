//12.8. Write a program that read your name and display every character with one space in reverse order

#include <stdio.h>

int main()
{
    char name[30];

    printf("Give your name:\n");

    int i, j, count =0;

    scanf("%[^\n]", name);

    for(i=0; name[i] != NULL; i++)
    {
        count++;
    }

    for(j=count-1; j>=0; j--)
    {
        printf("%c ", name[j]);
    }

    return 0;
}

