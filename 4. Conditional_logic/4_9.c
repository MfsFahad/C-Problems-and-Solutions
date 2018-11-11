//4.9. Write a program that read any year and display its leap year or not

#include <stdio.h>

#include <math.h>

int main()
{
    int x;

    scanf("%d", &x);

    if(x % 4 == 0)
    {
        if(x % 100 == 0)
        {
            if(x % 400 == 0)
            {
                printf("Leap year\n");
            }
            else
            {
                printf("Not leap year\n");
            }
        }
        else
        {
            printf("Leap year\n");
        }
    }
    else
    {
        printf("Not leap year\n");
    }

    return 0;
}
