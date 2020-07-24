#include <bits/stdc++.h>
using namespace std;

void swap(int *first, int *last)
{
    int temp = *first;
    *first = *last;
    *last = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, smallest;

    for (i = 0; i < n-1; ++i) {
        smallest = i;
        for (j = i + 1; j < n; ++j) 
            if (arr[j] < arr[smallest]) smallest = j;
        swap(&arr[smallest], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {51, 512, 51, 16, 715, 712, 873, 123, 42};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}