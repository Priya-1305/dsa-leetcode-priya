#include <iostream>
using namespace std;

int main(){
    int n;
    int a, b, next;
    a = 1;
    b = 1;
    cout<<"enter the number of terms you want in fibonacci sequence : ";
    cin>>n;
    for(int i = 0; i<=n; i++){
        cout<<a;

        next = a + b;
        a = b;
        b = next;

    }
}