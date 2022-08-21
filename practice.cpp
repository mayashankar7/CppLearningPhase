#include<iostream>
using namespace std;

class Base{
private:
    int length;
    int breadth;
public:
    Base(){
      cout<<"default constructor of base class is called"<<endl;
    }
    Base(int a){
        cout<<"parameterized constructor of base class is called"<<endl;
    }
};
class derived: public Base{
public:
    derived(){
        cout<<"default constructor of derived class is called"<<endl;
    }
    derived(int a){
        cout<<"parameterized constructor of derived class is called"<<endl;
    }
};

int main(){
    Base b1;
    Base b2(10);
    derived d1;
    derived d2(15);
    return 0;
}