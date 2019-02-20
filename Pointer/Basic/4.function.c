#include <stdio.h>

void Add(int data[], int size)  /// call by reference
{
        int i;  /// local i

        for(i = 0; i < size; i++)
        {
                data[i] = data[i] + 10;  /// this will effect on array named "ar"
                                                      /// because
                                                    /// data array is pointing on address of "ar" array
        }
}


int main()
{
        int ar[] = { 5, 10, 2, 7, 12};  /// size will determine on the number of initialized value
        int i;  /// local i

        for(i = 0; i < 5; i++)
        {
                printf("%d ", ar[i]);
        }

        printf("\n\n");

        Add(ar, 5);  /// just passing the array name
                           /// call by reference
                         ///  passing array name means passing array address

         for(i = 0; i < 5; i++)
        {
                printf("%d ", ar[i]);
        }

        printf("\n\n");

        return 0;
}
