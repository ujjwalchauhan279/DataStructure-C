#include <stdio.h>
int main()
{
    int a[100], n, i, k, temp;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j > 0 && a[j - 1] > a[j]; j--)
        {
            temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
        }
    }
    printf("Sorted Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}