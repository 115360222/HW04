#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[10] = { 64, 34, 25, 12, 22, 11, 90, 5, 45, 30 };
    int i, j, temp;
    int swapped;
    int n = 10;

    // Bubble Sort
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;

       
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                swapped = 1;
            }
        }

        
        if (swapped == 0)
        {
            break;
        }
    }

   
    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}