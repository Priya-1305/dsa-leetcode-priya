#include <bits/stdc++.h>
using namespace std;

int Hcf(int a, int b){
    if(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }

    }
    if(a==0){
        return b;
    }
    else{ 
        return a;
}
}

int main(){
    int n = 36;
    int m =12;
   cout<< Hcf(n,m);
}