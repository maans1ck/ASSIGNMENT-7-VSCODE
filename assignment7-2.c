#include <stdio.h>

int main()
{
    int n, i, search;
    int a[100];
    int count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            printf("Found at position %d\n", i + 1);
            count++;
        }
    }

    if(count == 0)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Total occurrences = %d\n", count);
    }

    return 0;
}