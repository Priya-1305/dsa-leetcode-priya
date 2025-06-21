#include <iostream>
#include <string>
using namespace std;

void trvs(string s){
    for(int i =0; i< s.size(); i++){
        cout<<s[i];
    }
}

int main(){

    string s = "Priya Sirohi";

    trvs(s);

    return 0;
}