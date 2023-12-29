#include <stdio.h>
void traverse(int *, int);
void main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    int N = 5;
    printf("press any key to perform array traversal and display its elements:\n\n");
    traverse(arr, N);
}
void traverse(int *array, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, array[i]);
    }
}