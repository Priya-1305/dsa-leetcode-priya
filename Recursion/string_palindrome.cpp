#include <bits/stdc++.h>
using namespace std;

bool checking(int n,string &s){
  if(n > s.size()/2)
  return true;
  if(s[n] != s[s.size()-1-n]){
    return false;

  }
  return checking(n+1, s);
}

int main(){
    string s = "madam";
    int n =0;
    cout<<checking(n,s);
}