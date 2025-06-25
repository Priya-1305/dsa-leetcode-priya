#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,10,4,5};
    bool flag;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n; i++){
        if(arr[i] >= arr[i+1]){
           flag = false;
          break;
        }
        else {
            flag = true;
        }
    }
    if(flag == true){
        cout<< "array is sorted";

    }
    else{
        cout<<"array is not sorted";
    }

}