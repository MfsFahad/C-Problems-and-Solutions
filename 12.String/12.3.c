///12.3. Write a program that converts a line to uppercase.

#include <stdio.h>

int main()
{
        int i;

        char name[25];

        scanf("%[^\n]", name);

        printf("As inputed: %s\n", name);

        for(i=0; name[i] != NULL ; i++)
        {
                if(name[i]>='a' && name[i]<='z')
                {
                        name[i] = name[i] - 32;
                }
        }

        printf("Uppercase: %s\n", name);

        return 0;
}
