#include<bits/stdc++.h>

using namespace std;

class mayas{
public:
    double length;
    double breadth;
    double height;
    double calculateArea(){
        return length * breadth;
    }
    double calculateVolume(){
        return length * breadth * height;
    }
};
int main(){
    mayas maya;
    maya.length=10;
    maya.breadth=12;
    maya.height=16;
    cout<<maya.calculateArea()<<endl;
    cout<<maya.calculateVolume()<<endl;
}
