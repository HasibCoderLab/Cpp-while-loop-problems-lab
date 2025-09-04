// ================================================
//               Language: C++ / Cpp
//               Topic   : [while loop]
//               Problem : 👉👉 [4]
//               Want    : Factorial_while.cpp
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter Number ";
    cin>>n;
    int fact = 1;
    int i = 1 ;
    while(i<=n){
        fact *= i;
        cout<< n << " Factorial is "  <<fact <<endl ; // step by step  output
        i++;
    }
    // cout<< n << " Factorial is "  <<fact <<endl ; // final output

    cout<< endl;
    return 0 ;
}