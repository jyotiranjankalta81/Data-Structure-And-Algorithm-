#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    // here pivot is the last element in the arr
    int pivot = arr[r];
    // first nu. less than pivot
    int i = l - 1;

    //    6 3 9 5 2 8 7
    //   |           |
    //  i j           pivot

    for (int j = l; j < r; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;
            // arr[i] swap with arr[j]
            swap(arr, i, j);
        }
    }
    // if curr element is greater than the pivot arr[i+1] swap with arr[r]

    //    6 3 5 2 7 8 9
    //         |   | |
    //          i   j pivot
    swap(arr, i + 1, r);

    return i + 1;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

int main()
{

    int arr[20] = {5, 4, 3, 2, 9, 10, 52, 36, 35, 89, 50, 1};
    quickSort(arr, 0, 11);
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}