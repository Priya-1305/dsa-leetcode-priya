#include <iostream>
using namespace std;

int max(int arr[], int n){
    int max = 0;
    for(int i = 0; i<n; i++){
        if(arr[i+1]> arr[i]){
            max = arr[i+1];
        }
    }
    return max;
}

int main(){
    int arr[]= {19,40,28,49,29,29};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<max(arr, n);
}