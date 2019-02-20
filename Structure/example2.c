#include <stdio.h>

struct Student
{
        int ID;

        char name[20];
};

int main()
{
        struct Student CSE[3];

        int i;

        for(i = 0; i < 3; i++)
        {
                printf("ID: ");
                scanf("%d", &CSE[i].ID);
                printf("Name: ");
                getchar();
                scanf("%[^\n]", CSE[i].name);
                //printf("\n");

        }

        printf("\n\nOutput\n\n");

        for(i =0; i<3 ; i++)
        {
                printf("ID: %d\n", CSE[i].ID);

                printf("Name: %s\n", CSE[i].name);

        }

}

