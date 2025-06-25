// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

#include <bits/stdc++.h>
using namespace std;

int secondLargest(int n, int arr[]){
    int second_largest = -1;
    
    sort(arr, arr+n);
    int largest = arr[n-1];
    for(int i = n-2; i>=0; i-- ){
        if(arr[i]< largest){
            second_largest = arr[i];
            break;
        }
    }
    return second_largest;
}

int main(){
    int n = 5;
    int arr[]= {1, 2, 3, 4, 5};

    cout<<secondLargest(n, arr);

    int arr1[] = { 5, 5, 5, 5, 5};
    cout<< endl;
    cout<<secondLargest(n, arr1);
}