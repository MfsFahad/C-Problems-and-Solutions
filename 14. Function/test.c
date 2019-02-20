#include <stdio.h>

int Add(int x, int y)
{
    int sum = x + y;

    return sum;
}
int main()
{
    int a, b;
    
    printf("Give a and b:\n");

    scanf("%d %d", &a, &b);
    
    int sum = Add(a, b);

    printf("Summation = %d", sum);
    
    return 0;
}