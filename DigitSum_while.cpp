// ================================================
//               Language: C++ / Cpp
//               Topic   : [while loop]
//               Problem : 👉👉 [6]
//               Want    : DigitSum_while.cpp
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int  x ;
    cout<<"Enter  Number : " ;
    cin>> x;
    int i = 1;
   int  sum = 0;
    while(x>0){
        int digit = x%10;
        sum += digit;
       x =  x /10 ;
        
        i++;
    }
    cout << "Digit Sum = " << sum << endl;

    return 0 ;
}
