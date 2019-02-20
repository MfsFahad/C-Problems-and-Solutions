#include <stdio.h>

void Add(int a, int b, int *p)
{
        *p = a + b;
}

int main()
{
      int a = 7, b = 3, z;

      Add(a, b, &z);

      printf("%d\n", z);

      return 0;
}
