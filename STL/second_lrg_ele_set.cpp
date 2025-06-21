#include <bits/stdc++.h>
using namespace std;

class SecondLarge{
    public:
    static void secondLargEle(set<int> s){
        auto largest_ele = prev(s.end());
        s.erase(largest_ele);
        auto second_largest_ele = prev(s.end());
        cout<< *second_largest_ele;
        
    }
};

int main(){
    set<int> s ={10,20,40,100,60};

    SecondLarge::secondLargEle(s);
}