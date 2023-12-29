#include <stdio.h>
void traverse(int *, int);
void main()
{
    int N;
    printf("Enter the size of array:- ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the array elements:- ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
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