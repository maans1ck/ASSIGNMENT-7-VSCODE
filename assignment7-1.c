#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Array elements are: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    average = (float)sum / n;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", average);

    return 0;
}