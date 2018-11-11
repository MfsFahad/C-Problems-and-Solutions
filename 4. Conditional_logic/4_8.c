//4.8. Write a program that read mark and display result in division

#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    if(x >= 80 && x <= 100)
    {
        printf("Grade A+");
    }
    else if(x >= 70 && x <= 79)
    {
        printf("Grade A");
    }
    else if(x >= 60 && x <= 69)
    {
        printf("Grade B");
    }
    else if(x >= 50 && x <= 59)
    {
        printf("Grade C");
    }
    else if(x >= 40 && x <= 49)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
