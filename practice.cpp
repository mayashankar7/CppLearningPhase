//Coding Ninja - Sum of even and odd
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int even_sum=0, odd_sum=0;
    while(n>0){
        int rem = n%10;
        if(rem%2==0){
            even_sum+=rem;
        }else{
            odd_sum+=rem;
        }
        n/=10;

    }
    cout<<even_sum<<"\t"<<odd_sum<<endl;
    return 0;
}