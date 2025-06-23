#include <bits/stdc++.h>
using namespace std;

// Partition function for QuickSort
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]); // place pivot in correct position
    return j;
}

// QuickSort recursive function
void qs(int arr[], int low, int high) {
    if (low < high) {
        int PIndex = partition(arr, low, high);
        qs(arr, low, PIndex - 1);
        qs(arr, PIndex + 1, high);
    }
}

// Function to sort and print the array
void SortedArr(int arr[], int size) {
    qs(arr, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int arr[5] = {69, 65, 4, 2, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    SortedArr(arr, size);
    return 0;
}
