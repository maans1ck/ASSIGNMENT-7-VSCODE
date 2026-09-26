#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;

    int mainSum = 0;
    int secondarySum = 0;

    int upper = 1;
    int lower = 1;
    int diagonal = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(i = 0; i < n; i++)
    {
        mainSum = mainSum + a[i][i];
        secondarySum = secondarySum + a[i][n - 1 - i];
    }

   
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            
            if(i > j && a[i][j] != 0)
            {
                upper = 0;
            }

            
            if(i < j && a[i][j] != 0)
            {
                lower = 0;
            }

            
            if(i != j && a[i][j] != 0)
            {
                diagonal = 0;
            }
        }
    }

    printf("\nMain diagonal sum = %d", mainSum);
    printf("\nSecondary diagonal sum = %d", secondarySum);

    if(diagonal == 1)
    {
        printf("\nThe matrix is diagonal.");
    }
    else if(upper == 1)
    {
        printf("\nThe matrix is upper triangular.");
    }
    else if(lower == 1)
    {
        printf("\nThe matrix is lower triangular.");
    }
    else
    {
        printf("\nThe matrix is none of these.");
    }

    return 0;
}