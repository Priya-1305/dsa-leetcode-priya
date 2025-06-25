#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum( vector <int> v, int target){
    

    for(int i =0; i< v.size(); i++){
        for(int j =0; j< v.size(); j++){
            
            if(v[i] + v[j] == target)
{
            return vector <int> {i,j};
 }
        }
    }
    return {-1, -1};
    
}
void printVector(const vector<int>& v) {
    cout << "[";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}



int main(){
    vector <int> arr ={1, 6, 2, 10, 3};
    int Target = 7;
    twoSum(arr, Target);
    cout<<endl;
    vector <int> arr1={1, 3, 5, -7, 6, -3};
    int Target2 = 0;
    twoSum(arr1, Target2);
    
}