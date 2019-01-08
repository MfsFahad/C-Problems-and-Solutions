#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char line[50], text[50];

    scanf("%[^\n]", line);
    getchar();
    scanf("%[^\n]", text);

    printf("\n");

    printf("line: %s\n", line);
    printf("text: %s\n\n", text);

    strcat(line, text); // strig concatenation - addition

    printf("line: %s\n", line);
    printf("text: %s\n\n", text);

    return 0;
}
