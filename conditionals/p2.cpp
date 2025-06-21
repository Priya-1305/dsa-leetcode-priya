#include <iostream>
using namespace std;

int main(){
     int n;
    cout<< "Enter the number : ";
    
    cin>> n;

    if (n>0){
        if(n%2==0){
            cout<< "positive even";
        }
        else if (n%2 != 0){
            cout<< " positive odd";
        }

    }

    else if (n<0){
        if(n % 2 == 0){
            cout<< "negative even";
        }
        else if(n % 2 != 0){
           cout<< "negative odd";
        }
    }

    else {
        cout<<" number is zer0";
    }

    return 0;
}