#include <iostream>
using namespace std;

int main(){

    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;

    if(x>y& x>z){
        cout<< x <<" is the largest of three";
    }
    else if(y>x & y>z){
        cout<<y<<" is the leargest of three";
    }
    else{
        cout<<z<<" is the largest of three";
    }

    cout<< x<<endl<<y<<endl<<z;
    return 0;
}