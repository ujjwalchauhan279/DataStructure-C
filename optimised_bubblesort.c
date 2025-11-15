#include <stdio.h>

void bubblesort(int n, int a[])
{
    int temp;
    int count;
    for (int i = 0; i < n - 1; i++)
    {
        // reset count to 0...
        count = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                count = 1;
            }
        }
        // check if swapping happens or not...
        if (count == 0)
        {
            break;
        }
    }
    printf("sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void main()
{
    int a[100], n, i, j, temp;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubblesort(n, a);
}