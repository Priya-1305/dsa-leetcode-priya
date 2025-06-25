#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter the value of n";
    cin>>n;

    if(n> 0){
        cout<< "entered num is positive";

    }
    else if (n < 0){
        cout<<"entered number is negative";
    }
    else{
        cout<<"entered num is zero";
    }

    return 0;
}