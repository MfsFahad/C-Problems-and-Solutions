//14.16. Write a function that gets any positive integer and determine it's prime or not
#include <stdio.h>
#include <stdbool.h>


bool Prime(int x)
{

        int i, count = 0;

        for(i=1; i<=x; i++)
        {
                if( x % i == 0)
                {
                        count++;
                }
        }

        if(count == 2)
        {
                return true;
        }
        else
        {
                return false;
        }
}

int main()
{
        int x;

        printf("Give any positive integer:\n");

        scanf("%d", &x);

        bool status = Prime(x);

        if(status == true)
        {
                printf("Prime");
        }
        else
        {
                printf("Not Prime");
        }

        return 0;
}
