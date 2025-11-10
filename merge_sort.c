#include <stdio.h>

void merge(int arr[], int low, int high, int mid)
{
    int auxiliaryarr[high+1];
    int i = low, j = mid + 1, k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            auxiliaryarr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            auxiliaryarr[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        auxiliaryarr[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        auxiliaryarr[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = auxiliaryarr[i];
    }
}

void mergesort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, low, high, mid);
    }
}
 
void main()
{
    int size;
    printf("enter size of array:");
    scanf("%d", &size);
    int arr[size];
    printf("enter array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int low = 0, high = size - 1;
    mergesort(arr, low, high);
    printf("sorted array:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}