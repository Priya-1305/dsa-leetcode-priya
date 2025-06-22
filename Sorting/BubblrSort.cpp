#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = n-1; i >=0; i--){
        int swaping = 0;
        for(int j =0; j< i; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaping = 1;
            }
        }
        if( swaping == 0){
            break;
    

}
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int j =0; j<n; j++){
        cin>>arr[j];
    }

   
    bubbleSort(arr,n);
    
      for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
}
