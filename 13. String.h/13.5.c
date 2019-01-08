#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char line[50];

    scanf("%[^\n]", line);

    printf("Inputed string: %s\n", line);

    strlwr(line); // for converting to lower case
    
    printf("Lower string: %s\n", line);
    
    return 0;
}
