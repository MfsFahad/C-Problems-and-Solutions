#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char line[50], text[50];

    scanf("%[^\n]", line);
    getchar();
    scanf("%[^\n]", text);

    printf("\n");

    int status = strcmp(line, text); // string comparison

    if(status == 0)
    {
        printf("strings are equal or same\n\n");
    }
    else
    {
        printf("strings are not equal \n\n");
    }

    printf("line: %s\n", line);
    printf("text: %s\n\n", text);

    return 0;
}
