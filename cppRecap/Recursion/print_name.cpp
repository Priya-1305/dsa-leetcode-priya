#include <bits/stdc++.h>
using namespace std;

int printName(string s, int n){
    
    if(n==0){
        return 0;
    }
    cout<<s<<endl;
    printName(s, n-1);
    return 0;
}
int  main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    printName(s,n);
}

