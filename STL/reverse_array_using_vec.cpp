# include <bits/stdc++.h>
using namespace std;

class Reversearr{

    public:
    void reverseAnArray(vector<int> arr){ 
    
    reverse(arr.begin(), arr.end());
    vector<int>::iterator it;
     for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
    cout << *it << " ";
}
    }


};
int main(){
    Reversearr obj;
    vector<int> arr = { 10, 20, 30, 40, 50};
    obj.reverseAnArray(arr);
    
}