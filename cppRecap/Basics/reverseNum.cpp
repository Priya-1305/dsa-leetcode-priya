#include <bits/stdc++.h>
using namespace std;

int ReverseNum(int n){
    int reverse = 0;
    while(n !=0){
        int last_digit = n%10;
        reverse = reverse* 10 + last_digit;
        n = n/10;


    }
    return reverse;
}

int main(){
    int n = 1234;
    cout<<ReverseNum(n);
}