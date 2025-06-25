#include <bits/stdc++.h>
using namespace std;

auto Extract(int m){
    vector<int> v;
    int num =0;
    while(m!=0){
        int s = m%10;
        v.push_back(s);
        m = m/10;

    }
    reverse(v.begin(),v.end());
    return v;
}

int main(){
    int n = 43753;
    vector<int> print = Extract(n);
    for(int d : print){
        cout<<d<<" ";
    }
}