#include <iostream>
#include <string>
using namespace std;

void palindrome(string s){
       string rvs = "";
    for(int i = s.size()-1; i >=0; i-- ){
           rvs = rvs + s[i];
    }
    if(rvs == s){
        cout<<"given string is the palindrome"<<endl;
    }
    else {
        cout<<"no it's not a plaindrome";
    }
}

int main(){

    string s = "priya";
    string r = "qmqmq";

    palindrome(s);

    cout<<endl;

    palindrome(r);


    return 0;
}