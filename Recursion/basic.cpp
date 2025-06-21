#include <bits/stdc++.h>
using namespace std;
    
int fun(int n){
    if(n==10){
        return 0;
    }
    cout<<n<<" ";
    fun(n+1);

}
int main(){
    int n = 0;
    fun(n);
}