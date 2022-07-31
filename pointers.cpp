#include <bits/stdc++.h>

using namespace std;

int main(){
    int value = 10;
    cout<<&value<<endl;
    int *p = &value;
    cout<<p<<endl;
    cout<<"value of "<<value<<" is equal to the *P "<<*p<<endl;
//    double pointers
    int **pa = &p;
    cout<<**pa<<endl;
    return 0;
}