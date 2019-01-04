#include <stdio.h>

int main()
{
        char name[25];

        /// scanf("%s", name);  /// for non space string

        scanf("%[^\n]", name);  /// for space string

        printf("%s", name);

        return 0;
}
