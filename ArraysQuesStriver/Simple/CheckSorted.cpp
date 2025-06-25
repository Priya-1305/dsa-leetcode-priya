#include <bits/stdc++.h>
using namespace std;

void Check_arr_is_Sorted(int arr[], int n){
    bool isSorted = true;

    for(int i =1; i < n-1; i++){
        if(arr[i] < arr[i-1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<< "Yes array is sorted";
    }
    else{
        cout<<"No, array is not sorted";
    }
}

int main(){
    int n =5;
    int arr[] = {1,2,3,4,5};
    Check_arr_is_Sorted(arr, n);
    int arr1[]= {5,5,5,5,5};
    Check_arr_is_Sorted(arr1, n);
}