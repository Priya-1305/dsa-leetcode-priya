#include <iostream>
using namespace std;

int main(){
    cout<< "Enter the year : ";
    int year;
    cin>> year;

    if(year%4 == 0 ){
        cout<<year<<" is a leep year";
    }
    else{
        cout<<year<<" is not a leep year";
    }
    return 0;
}