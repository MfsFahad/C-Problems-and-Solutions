//12.7. Write a program that read your name and display every character with one space

#include <stdio.h>

int main()
{
    int i;
    
    char name[30];

    printf("Give your name:\n");

    scanf("%[^\n]", name);

    for(i=0; name[i] != NULL; i++)
    {
        printf("%c ", name[i]);
    }

    return 0;
}

