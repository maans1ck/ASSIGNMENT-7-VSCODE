#include <stdio.h>

int main()
{
    int a[100];
    int n, i;

    int largest, secondLargest;
    int smallest, secondSmallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = secondLargest = a[0];
    smallest = secondSmallest = a[0];

    for(i = 1; i < n; i++)
    {
        // Largest and second largest
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }

        // Smallest and second smallest
        if(a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] < secondSmallest && a[i] != smallest)
        {
            secondSmallest = a[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second Largest = %d\n", secondLargest);
    printf("Smallest = %d\n", smallest);
    printf("Second Smallest = %d\n", secondSmallest);

    return 0;
}