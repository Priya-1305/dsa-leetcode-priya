#include <bits/stdc++.h>
using namespace std;

void printDivisor(int n){
    vector<int> v;
    for(int i = 1; i< sqrt(n); i++){
        if(n%i == 0){
            v.push_back(i);
            if(n/i != i){
                v.push_back(n/i);
            }
        }
        
    }
    sort(v.begin(), v.end());
        for(int digit : v){
            cout<<digit<<" ";
        }
}

int main(){
    int n =36;
    printDivisor(n);

}