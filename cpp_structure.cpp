#include <bits/stdc++.h>
using namespace std;
struct Person{
    char name[50];
    int age;
    int salary;
    char address[100];
};

Person getValues(Person);
void displayValues(Person);
int main(){
    Person p1;
    p1= getValues(p1);
    displayValues(p1);
    return 0;
}
 Person getValues(Person p){
    cout<<"Enter Your Name Here"<<endl;
    cin.get(p.name, 50);
    cout<<"Enter Your Age Here"<<endl;
    cin>>p.age;
    cout<<"Enter Your Salary Here"<<endl;
    cin>>p.salary;
    return p;
};
void displayValues(Person p){
    cout<<"Users Information Is Displayed Below"<<endl;
    cout<<"Name \t"<<p.name<<endl;
    cout<<"Age \t"<<p.age<<endl;
    cout<<"Salary \t"<<p.salary<<endl;
}

