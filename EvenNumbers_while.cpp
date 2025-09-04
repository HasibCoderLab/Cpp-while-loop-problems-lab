// ================================================
//               Language: C++ / Cpp
//               Topic   : [while loop]
//               Problem : 👉👉 [3]
//               Want    : EvenNumbers_while.cpp
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter Number " ;
    cin>> n;
    int i = 1;
    while(i<=n){
        
        if(i%2 ==0){
            cout << i <<" " ;
            
        }
        i++;
       
    }
    cout <<endl;
 return 0 ;
}
