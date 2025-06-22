#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int first, int mid, int last){
  vector <int> S;
  int left = first;
  int right = mid+1;

  while(left<= mid && right <= last){
    if(arr[left]> arr[right]){
        S.push_back(arr[right]);
        right++;
    }
    else{
        S.push_back(arr[left]);
        left++;
    }
  }
  while(left <= mid){
    S.push_back(arr[left]);
    left++;
  }
    while(right <= last){
    S.push_back(arr[right]);
    right++;
  }
  

  for(int i = 0; i< S.size(); i++){
     arr[first+i]= S[i];
    
  }
}


void MergeSort(int arr[], int first, int last){
    if (first >= last) return;
    int mid = (first + last)/2;
    MergeSort(arr, first, mid);
    MergeSort(arr, mid+1, last);
    Merge(arr, first, mid, last);

}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 8, 4, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    MergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}