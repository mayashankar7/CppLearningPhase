#include <iostream>
#include <limits.h>
using namespace std;

int main() {

//    size of operator in cpp
    cout<< sizeof(int )<<endl;
    cout<< sizeof(bool )<<endl;
//    Max values of identifiers:- syntax<limits.h> header file is defined to find the range of fundamental data-types.
    cout<<CHAR_MAX<<endl;
    cout<<CHAR_MIN<<endl;
    cout<<INT_MAX<<endl;
//    postfix and prefix concept of increment and decrement
    int a = 1;
    int b = ++a;   // b = 1
    int c = a;
    cout<<a<<b<<c;

    return 0;
}
