#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    if(n==0){
        return 0;
    }

    reverseNum(n-1);
    cout<<n<<" ";
}

int main(){
    int n =20;
    reverseNum(n);
}