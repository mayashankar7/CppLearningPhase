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
//    Multi- dimentional Array
    int x,y;
    cin>>x>>y;
    int arr[x][y];
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
//    Other method to initialize a multi dimentional array
    int arr2[2][3][4] =
            {
                    { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} },
                    { {12,13,14,15}, {16,17,18,19}, {20,21,22,23} }
            };
    // output each element's value
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "Element at x[" << i << "][" << j
                     << "][" << k << "] = " << arr2[i][j][k]
                     << endl;
            }
        }
    }
    cout<<sizeof(arr2)<<endl;
    return 0;
}
