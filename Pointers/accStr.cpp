#include <iostream>
#include <string>
using namespace std;


void accStr(string s, char ch, int* first, int* last){
  for(int i =0; i < s.size(); i++ ){
    if(s[i] == ch){
      *first = i;
      break;
    }
  }
  for(int j = s.size()-1; j >= 0; j-- ){
    if(s[j] == ch){
      *last = j;
      break;
    }
  }


}

int main(){

  string s = "artsbubda";
  int f = -1;
  int l = -1;
  char ch = 'a';
  accStr(s, ch, &f, &l);

  cout<< f <<"  "<<l;

  
    return 0;
}