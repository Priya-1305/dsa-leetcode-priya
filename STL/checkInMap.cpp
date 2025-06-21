#include <bits/stdc++.h>
using namespace std;

class checkInMap{
  public:
   static  void checking(map<char,int> m , int n){
       
       if(m.find(n) != m.end()){ 
        cout<<"yes";
       } else{
        cout<<"no";
       }
       
       
       
   }
};

int main(){
    int n = 'b';
    map<char,int> m = {{'a' , 1}, {'b', 2}, {'c', 3}};

    checkInMap::checking(m,n);
}