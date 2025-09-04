// ================================================
//               Language: C++ / Cpp
//               Topic   : [while loop]
//               Problem : 👉👉 [5]
//               Want    : PrimeCheck_while.cpp
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int  n;
    cout<<"Enter Number " ;
    cin>> n;
    if(n<=1){
        cout<<"Not Prime Number " ;
    }
    int i = 2;
    while(i<n){
        if(n%i == 0){
            cout << n << " is NOT a Prime Number" << endl;
            return 0;
            
        }
        i++;
        
    }

    cout << n << " is  a Prime Number" << endl;
    return 0 ;
}

