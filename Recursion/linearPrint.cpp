#include <bits/stdc++.h>
using namespace std;

int printNum(int n){
    ;
    if(n==0){
        return 0;
    }
    cout<<n;
    
    printNum(n-1);
    
}

int main(){
    int n = 10;
    printNum(n);
}