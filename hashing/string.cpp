#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int qu;
    cin >> qu;
    while (qu--) {
        char ch;
        cin >> ch;
        cout << hash[ch - 'a'] << endl;
    }

    return 0;
}
