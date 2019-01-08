#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char line[50];

    scanf("%[^\n]", line);

    printf("Inputed string: %s\n", line);

    strupr(line); // for converting to upper case
    
    printf("Upper string: %s\n", line);
    
    return 0;
}
