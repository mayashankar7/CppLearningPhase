#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void palindrome(int num){
    int temp = num;
    int sum=0;
    while(num>0){
        int rem= num%10;
        sum = sum*10+rem;
        num/=10;
    }
    if(sum==temp){
        cout<<"Yes, the number is palingdrome"<<endl;
    }
    else{
        cout<<"No, number is not a palingdrome"<<endl;
    }
}
void armstrong(int num){
    int temp = num;
    int sum=0;
    int count=0;
    while(num>0){
        count++;
        num/=10;
    }
    num=temp;
    while(num>0){
        int rem = num%10;
        sum= sum + round(pow((double)rem,(double)count));
        num/=10;
    }
    if(sum==temp){
        cout<<"yes the number "<<sum<<" is a Armstrong Number"<<endl;
    }else{
        cout<<"No the number "<<sum<<" is not a Armstrong Number"<<endl;
    }
}
void swapping(int x, int y){
    cout<<"Number before swapping is "<<x<<"\t"<<y<<endl;
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Number After swapping is "<<x<<"\t"<<y<<endl;
}
int main(){
    int num,choice=0;
    string username, password;
    cout<<"\t Welcome t codeWorld !!\n";
    cout<<"Login to the application \nEnter your username";
    getline(cin,username);
    cout<<"Enter your password";
    getline(cin, password);
    if(username=="Me@123" && password=="9876") {

        do {
            cout << "\nChoose the code to run and test \n"
                 << "1. Palingdrome Number \n2. Armstrong Number \n3. Swap the two Number \n4. Exit()" << endl;
            cout << "enter Your Choice" << endl;
            cin >> choice;
            switch (choice) {
                case (1):
                    cout << "enter the number to be tested" << endl;
                    cin >> num;
                    palindrome(num);
                    break;
                case (2):
                    cout << "enter the number to be tested" << endl;
                    cin >> num;
                    armstrong(num);
                    break;
                case (3):
                    int x, y;
                    cout << "enter two number to be swapped" << endl;
                    cin >> x >> y;
                    swapping(x, y);
                    break;
                case (4):
                    exit(0);
            }
        } while (1);
    }
    else{
        cout<<"Invalid username or password"<<endl;
    }
    return 0;
}