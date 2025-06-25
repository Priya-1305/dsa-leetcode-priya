#include <iostream>
using namespace std;

int print(int &x){
     x = x+5;
return 0;
}
int main(){
    int x = 10;
    print(x);
    cout<<x;
}
