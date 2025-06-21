#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    int* a = &arr[0];

    for(int i =0; i< 5; i++){
        cout<<*a;
        cout<<"  ";
        a++;
    }

  

    return 0;
}