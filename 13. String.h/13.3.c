#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char line[50], text[50];

    scanf("%[^\n]", line);
    getchar();
    scanf("%[^\n]", text);

    printf("line: %s\n", line);
    printf("text: %s\n\n", text);

    strcpy(line, text); // for copy

    printf("line: %s\n", line);
    printf("text: %s\n\n", text);

    return 0;
}
