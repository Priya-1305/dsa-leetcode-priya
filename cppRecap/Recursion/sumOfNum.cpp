#include <bits/stdc++.h>
using namespace std;

int SumofNum(int n){
    if(n==0){
        return 0;
    }
    return n + SumofNum(n-1);
}

int main(){
    int n = 10;
    cout<< SumofNum(n);
}