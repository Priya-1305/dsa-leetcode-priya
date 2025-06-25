#include <iostream>
using namespace std;

int main(){
    int x , y;
    cout<< "enter first num : ";
    cin>>x;
    cout<< "enter second num : ";
    cin>>y;
    cout<<endl;
    int opr;
    cout<<"choose operation: 1 --> +, 2--> -, 3 --> *, 4 --> /"<<endl;
    cin>>opr;

    if(opr ==1 ){
        cout<< x+y;
    }
    else if(opr == 2){
        cout<< x-y;
    }
    else if (opr==3){
        cout<< x*y;
    }
    else {
        cout<< x/y;
    }
    return 0;
}