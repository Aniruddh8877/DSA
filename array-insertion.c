#include <stdio.h>
void main()
{
    int arr[10] = {-1, 3, 6, 9, 12};
    int i, k, N, P;
    N = 5;
    printf(" The contents of the array are : \n");
    for (i = 0; i < N; i++)
    {
        printf("array[%d] = %d\n", i, arr[i]);
    }
    printf(" \nEnter the element to be inserted :- ");
    scanf("%d", &P);
    printf("\n Enter the index location where %d is to be insertion:- ", P);
    scanf("%d", &k);
    for (i = N; i >= k; i--)
    {
        arr[1 + i] = arr[i];
    }
    arr[k] = P;
    N = N + 1;
    printf(" The contents of the array after array insertion are : \n");
    for (i = 0; i < N; i++)
    {
        printf("array[%d] = %d\n", i, arr[i]);
    }
}