//count digits
#include <bits/stdc++.h>
using namespace std;

int CountingDigit(int n){
    int count =0;
    while(n!=0){
        count++;
        n= n/10;
      
      
    }
      return count;  
}
int main(){
    int n = 1234;
    cout<<CountingDigit(1234);
}