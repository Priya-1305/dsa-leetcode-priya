#include <iostream>
using namespace std;


int distint_ele(int arr[], int n){
     int count = 0;
    

    for(int i =0; i<n; i++){
        bool isDistint = true;
        for(int j = 0; j<i; j++){
            if(arr[i]== arr[j]){
                isDistint = false;
                break;
            }
        }
        if(isDistint == true){
            count++;
        }

    }
    return count;
}

int main(){
    int arr[] = {10,30,20,40,10,30,30};
int n = sizeof(arr)/sizeof(arr[0]);
    cout<<distint_ele(arr, n);

    
}