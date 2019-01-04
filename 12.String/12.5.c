//12.5. Write a program that read a line of text and display it's length

#include <stdio.h>

int main()
{
        char line[40];
        int i, count = 0;

        scanf("%[^\n]",  line);

        for(i = 0; line[i] != NULL; i++)
        {
                count++;
        }

        printf("%s\n", line);

        printf("Length of string: %d", count);

        return 0;
}
