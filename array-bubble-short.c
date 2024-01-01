#include <stdio.h>
void main()
{
    int array[5] = {5, 4, 6, 8, 3};
    int i, k, j, t;
    printf("\n The inital array elements are-- ");
    for (i = 0; i < 5; i++)
    {
        printf("\narray[%d] is =%d", i, array[i]);
    }
    for (i = 5; i > 1; i--)
    {
        for (j = 0; j < i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                t = array[j + 1];
                array[j + 1] = array[j];
                array[j] = t;
            }
        }
    }
    printf("\n The shorted array elements are--\n ");
    for (i = 0; i < 5; i++)
    {
        printf("\narray[%d] is =%d", i, array[i]);
    }
}