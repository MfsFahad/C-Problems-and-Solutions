#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char line[50];

    scanf("%[^\n]", line);

    printf("Inputed string: %s\n", line);

    strrev(line); // for reversing string
    
    printf("Reverse string: %s\n", line);
    
    return 0;
}
