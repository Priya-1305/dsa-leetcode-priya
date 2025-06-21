#include <iostream>
using namespace std;

int primefact(int n){
    for(int i = 2; i<=n; i++){
        if(n % i == 0){
            cout<< i<<" ";
        }

    }
}

int main(){

    int a = 100;
    primefact(a);
}