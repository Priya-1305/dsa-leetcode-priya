#include <bits/stdc++.h>
using namespace std;

void removeDublicates(int arr[], int n){
    vector <int> v;
    
    for(int i = 0; i<n; i++){
        bool found = false;
        for(int j = 0; j< v.size(); j++) {
           if(arr[i] == v[j]){
                found = true;
                break;
           }

        }
        if(!found){ 
        v.push_back(arr[i]);
        }
    }
    for(int k =0; k < v.size(); k++){
        cout<<v[k]<<" ";
    }
    
}

int main(){
    int n =5;
    int arr[] = {1,1,2,3,3};
    removeDublicates(arr, n);
}