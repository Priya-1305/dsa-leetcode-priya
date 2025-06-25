#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n){
    int temp = arr[0];
    for(int i =0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
int main(){
    int n = 4;
    int arr[]={1,2,3,4};
    leftRotate(arr, n);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr1[]= {-1, 0, 3, 6};
    leftRotate(arr1, n);

      for(int j =0; j<n; j++){
        cout<<arr1[j]<<" ";
    }
}