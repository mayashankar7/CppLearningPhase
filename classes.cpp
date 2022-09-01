#include<iostream>
using namespace std;

class Fraction{
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator){
        this->numerator= numerator;
        this->denominator= denominator;
    }
    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
    Fraction operator*(Fraction const &f2){
        int n = numerator*f2.numerator;
        int d = denominator*f2.denominator;
        Fraction fNew(n,d);
        return fNew;
    }

};
int main(){
    Fraction f1(10,5);
    Fraction f2(12,8);
    f1.print();
    f2.print();
    Fraction f3 = f1*f2;
    f3.print();
    return 0;
}