#include <iostream>
using namespace std;

int avg(int arr[], int n){
    int sum =0;
    
    for(int i =0; i<n; i++){
         sum = sum +arr[i];
    }
int avg = sum/ n;
return avg;
}

int main(){
    int arr[]={4,4,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<< avg(arr, n);
}