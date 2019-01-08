#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char line[50];

    scanf("%[^\n]", line);

    int length = strlen(line); // string length

    printf("Inputed string length: %d\n", length);

    return 0;
}
