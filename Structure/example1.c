#include <stdio.h>

struct Student
{
        int ID;

        char name[20];
};

int main()
{
        struct Student fahad;


        scanf("%d", &fahad.ID);
        getchar();
        scanf("%[^\n]", fahad.name);

        printf("ID: %d\n", fahad.ID);
        printf("Name: %s\n", fahad.name);


}
