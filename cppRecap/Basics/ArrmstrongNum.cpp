#include <bits/stdc++.h>
using namespace std;

void ArmstrongNum(int n){
    int result;
    int extract = 0;
    int m = n;

    while(m>0){
        result = m%10;
        extract = extract + result*result*result ;
        m = m/10;
    }
    if(n == extract){
        cout<<"It's a armstrong number";
    }
    else{
        cout<<"no it is not a armstrong number";
    }
}

int main(){
    int n = 1234;
    ArmstrongNum(n);
}
