#include <stdio.h>
void main()
{
    int n1, n2;
    printf("enter size of first array: ");
    scanf("%d", &n1);
    printf("enter first array: ");
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter size of second array: ");
    scanf("%d", &n2);
    printf("enter second array: ");
    int arr2[n2];
    for (int j = 0; j < n2; j++)
    {
        scanf("%d", &arr2[j]);
    }
    int n3 = n1 + n2;
    int arr3[n3];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++, k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    for (int k = 0; k < n3; k++)
    {
        printf("%d ", arr3[k]);
    }
}