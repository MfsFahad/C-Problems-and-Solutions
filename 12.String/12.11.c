/*
12.11. Write a program that read any line of text and display number of uppercase, lowercase, digits, spaces and
       other characters
*/

#include <stdio.h>

int main()
{
    int i, upper_count = 0, lower_count = 0, digit_count = 0, space_count = 0, other_count = 0;

    char line[30];

    printf("Give a line:\n");

    scanf("%[^\n]", line);

    for(i=0; line[i] != NULL; i++)
    {
        if(line[i] >= 'A' && line[i] <= 'Z')
        {
            upper_count++;
        }
        else if(line[i] >= 'a' && line[i] <= 'z')
        {
            lower_count++;
        }
        else if(line[i] >= '0' && line[i] <= '9')
        {
            digit_count++;
        }
        else if(line[i] == ' ')
        {
            space_count++;
        }
        else
        {
            other_count++;
        }
    }

    printf("Uppercase: %d\n", upper_count);
    
    printf("Lowercase: %d\n", lower_count);
 
    printf("Digit: %d\n", digit_count);
 
    printf("Spcae: %d\n", space_count);

    printf("Other Character: %d\n", other_count);

    return 0;
}