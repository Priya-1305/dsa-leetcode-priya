#include <bits/stdc++.h>
using namespace std;

vector <int> Element_Appears_more(vector<int> v){
    
    for(int i =0; i< v.size(); i++){
       
        for(int j =0; j< v.size(); j++){
            for(int k =0; k< v.size(); k++){
                if(v[i] == v[k] && v[j] == v[k]){
                    
                       result.push_back(v[k]);
                }
            }
        }
    }
    return result;
}

void printResult(vector<int> v){
  for(int i =0; i< v.size(); i++){
        cout<<v[i]<<" ";
  }
}

int main(){
    vector<int> v = {1, 2, 1, 1, 3, 2};
    Element_Appears_more(v);
    printResult(Element_Appears_more);
}