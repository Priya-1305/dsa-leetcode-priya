#include <bits/stdc++.h>
using namespace std;

void CheckPalindrom(int n){
   
    int reverse =0;
    int m = n;
    while(m>0){
        int last_digit = m%10;
        reverse = reverse*10 +last_digit;
        m = m/10;

    }
    if(reverse == n){
        cout<<"yes it is a palindrome";

    }
    
    else{
        cout<<"it is not a palindrome";
    }
    

}

int main(){
    int n = 1234;
    CheckPalindrom(n);
}