#include <stdio.h>

int main()
{
    int a[100];
    int n, i, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter new element: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &position);

    if(position < 1 || position > n + 1)
    {
        printf("Invalid position.");
    }
    else
    {
        for(i = n; i >= position; i--)
        {
            a[i] = a[i - 1];
        }

        a[position - 1] = element;

        n++;

        printf("Updated array: ");

        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}