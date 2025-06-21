#include <iostream>
using namespace std;
// right triangle
/*int main(){
    int n;
    cin>>n;
    cout<<endl;
    for(int i = 1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<'*';
            // cout<<endl;
        } 
        cout<<endl;
    }
      return 0;
}
      
lest triangle 

int main(){
    int n ;
    cin>> n;
    for(int i =1;i<=n ; i++){
        for(int j =n; j>=i; j--){
            cout<<" ";

        }
        for(int k = 1; k<=i; k++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
} 
int main(){
    int n ;
    cin>> n;
    for(int i =1;i<=n ; i++){
        for(int j =1; j<=i; j++){
            cout<<" ";

        }
        for(int k =n-i; k>=1; k--){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
} */

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i = 1; i<=n; i++){
//         for(int j= n-i; j>=1; j--){
//             cout<<" ";

//         }
//         for(int l =n; l >= i; l--){
//             cout<<" ";
//         }
//         for (int k =1; k<=i; k++){
//             cout<< " * ";
//         }
    
        
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i = 1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<" ";

        }
        
        for (int k=n; k>=i; k--){
            cout<< "    *   ";
        }
        for(int l = 1; l<=n; l++){
            cout<<" ";
        }
    
        
        cout<<endl;
    }
}