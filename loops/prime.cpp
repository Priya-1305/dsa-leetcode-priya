#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter the number : ";
    cin>>n;
     if(n == 1 || n ==2 ){
        cout<< " given number is a prime number";
        return 0;
     }
     
    for(int i = 2; i<n; i++){
        if( n % i == 0){
            cout<<" given num is not prime";
              break;
        }
         else{
            cout<< "It is a prime num";
            break;
        }
       
    }
}