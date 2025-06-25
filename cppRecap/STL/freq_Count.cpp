#include <bits/stdc++.h>
using namespace std;

class frequency{
  public:

  static  void countFreq(string s){
        map<char, int> freq;
        for(char ch : s){
            freq[ch]++;
        }
        for(auto it: freq){
            cout<< it.first << "->" << it.second;       }
    }
};

int main(){
    string s = "babananan";
     frequency::countFreq(s);

}