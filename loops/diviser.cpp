#include <iostream>
using namespace std;

int main(){
    int count =0;
    int n;
    cin>>n;

    for(int i=1; i<n; i++){
           if(n%i == 0){
               count ++;
           }
    }
    cout<<count;
    return 0;
}