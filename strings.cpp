#include <bits/stdc++.h>
using namespace std;

int main(){
    string name = "mayashankar jha";
    cout<<name<<endl;
//    pop_back() function is used to delete the last character from the string.
    name.pop_back();
    cout<<name<<endl;
//    push_back( function is used to input a character at the end of the string.
    name.push_back('l');
    cout<<name<<endl;
//    raw string literal
    string value= R"(my nme.\ is .\ maya .\ shankar)";
    cout<<value<<endl;
//    Gettiing string value in user input using getline method
    string username;
    getline(cin,username);
    cout<<username<<endl;
    return 0;
}

