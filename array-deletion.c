#include <stdio.h>
void main()
{
    int array[] = {-12, 0, 12, 24, 36};
    int i, k, n ,D;
    n = 5;
    printf("The array elemets are :-");
    for (i = 0; i < n; i++)
    {
        printf("array[%d]=%d\n ", i, array[i]);
    }
    printf(" Enter the index location from where element is to deleted :- ");
    scanf("%d", &k);
    D = array[k];
    // main formula of deletion starts here
    for (i = k; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    n = n - 1;
    // ends here
    printf("\n %d element deleted from index location %d\n\n ",D,k);
     printf("The array elemets after deletion are :- \n");
    for (i = 0; i < n; i++)
    {
        printf("array[%d]=%d\n ", i, array[i]);
    }
}