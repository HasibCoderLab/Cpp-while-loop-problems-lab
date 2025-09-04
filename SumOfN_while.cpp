// ================================================
//               Language: C++ / Cpp
//               Topic   : [while loop]
//               Problem : 👉👉 [2]
//               Want    : SumOfN_while.cpp
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>> n;
    int sum  = 0; 
    int i = 1;
    while(i<=n){
        sum+=i;
       
        i++;
    }
    cout<<"Sum of 1  to  " << n  <<" is " << sum <<endl; 
    return 0 ;
}