#include <bits/stdc++.h>
using namespace std;

int fibinacci(int n){
    if(n<=1){
        return n;
    }
    return fibinacci(n-1) + fibinacci(n-2); 
}
int main(){
  
    cout<<fibinacci(4);
}