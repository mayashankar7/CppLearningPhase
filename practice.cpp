#include<iostream>
using namespace std;
class Maya2{
private:
    int age;
public:
    int salary;
//    setters
    void setData(int a, int s){
        age = a;
        salary= s;
    }
    int getAge(){
        return age;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    Maya2 m1 ;
    m1.setData(22,55000);
    cout<<m1.getAge()<<" "<<m1.getSalary()<<endl;

}