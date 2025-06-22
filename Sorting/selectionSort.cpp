#include <bits/stdc++.h>
using namespace std;

class SelectionSort{
    public:
    static void selectionSort(int arr[], int n){
        
        for(int i =0; i< n-1; i++){
            int mini = i;
          for(int j = i+1; j<n; j++){
            if(arr[j]< arr[mini]){
                mini = j;
            }
          }
          if(mini != i){
            swap(arr[i], arr[mini]);
        }
        }
         for(int k=0; k<n; k++){
             cout<<arr[k]<<" ";
        }
        



    }
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
       
    }
       for(int k=0; k<n; k++){
            cout<<arr[k]<<" ";
        }

    SelectionSort::selectionSort(arr, n);
 
}