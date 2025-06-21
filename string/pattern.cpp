#include <iostream>
#include <string>
using namespace std;

void patr(string s, string ptr ){
  int len = ptr.size();
  int start = s[0];
    
     
for(int a =0; a < s.size(); a++){
    
     string result = "";
    for(int i= start; i< len; i++){
       
        result += s[i]; 
    }

   if(result == ptr){
    cout<<"pattrn found";
    break;
   }
   start = ptr.size();
}
}
int main(){
    string s = "prprapar";
    string pts = "apa";

    patr(s, pts);
    return 0;
}