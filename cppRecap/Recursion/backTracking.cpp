#include <bits/stdc++.h>
using namespace std;

int Backtracking(int n){
    if(n==10){
       return 0;
    }
    Backtracking(n+1);
    cout<<n<<" ";
}
int main(){
    int n = 1;
    Backtracking(n);
}