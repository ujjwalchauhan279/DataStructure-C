#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    while (i < j)
    {
        while (arr[i] < pivot && i<=high)
        {
            i++;
        }
        while (arr[j] >= pivot && j>=low+1)
        {
            j--;
        }
        if (i < j)  
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    if(i!=j){
    temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;
    }
    return j; //return correct pivot index
}

void quicksort(int arr[], int low, int high)
{
    int pivotindex;
    if (low < high)
    {
        pivotindex = partition(arr, low, high); // gives correct pivot index
        quicksort(arr, low, pivotindex - 1);    // left half
        quicksort(arr, pivotindex + 1, high);   // right half
    }
}

void main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("enter array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int low = 0;
    int high = size - 1;
    quicksort(arr, low, high);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}