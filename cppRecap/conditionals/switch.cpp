#include <iostream>
using namespace std;

int main(){
    int x=0;
    int y = 0;
    cout<<"enter your move from {'L', 'R', 'U', 'D'}: ";
    char move ;
    cin>> move;

    switch (move)
    {
        case 'L':
        x++;
        break;
        case 'R':
        x--;
        break;
        case 'U':
        y++;
        break;
        case 'D':
        y--;
        break;
    
    default:
     cout<<"Choose from L R U D ONLY"<<endl;
    }

    cout<<x<<"  "<<y;


    return 0;
}