// Given an array of integers nums, return the value of the largest element in the array
#include <bits/stdc++.h>
using namespace std;

int findLargest(int arr[], int n){
    int Largest_ele = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]> Largest_ele){
            Largest_ele = arr[i];
        }
    }
    return Largest_ele;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findLargest(arr, n);


}