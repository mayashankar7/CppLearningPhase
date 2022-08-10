//  program to insert an element in an array
#include<iostream>

using namespace std;
int insert_element(int array[], int n, int position, int capasity, int x){
    if(n == capasity){
        return n;
    }
    int index = position-1;
    for(int i=n-1; i>=index; i--){
        array[i+1]= array[i];
    }
    array[index]=x;
    return (n+1);
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n ; i++){
        cin>>array[i];
    }
    n++;
    int result = insert_element(array,n, 3, 10, 77);
    cout<<result<<endl;
    cout<<array[2];
}