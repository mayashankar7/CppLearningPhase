#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int findLargest(int array[], int n){
    int max=0;
    for(int i=0; i<n; i++){
        if(array[i]>array[max])
            max=array[i];
        else
            max=array[i];
    }
    return max;
}
int secondLargest(int array[], int n){
    int maxValue = findLargest(array,n);
    int second = -1;
    for(int i=0; i<n; i++){
        if(array[i] != maxValue ){
            if(second==-1){
                second = i;
            }else if(array[i]>array[second]){
                second = i;
            }
        }
    }
    return array[second];
}
void secondELement(int array[], int n){
    int largest, result;
    largest= result= INT_MIN;
    for(int i=0; i<n; i++){
        if(array[i]>largest){
            result= largest;
            largest= array[i];
        }else if(array[i]>result && array[i] != largest){
            result= array[i];
        }
    }
    if(result== INT_MIN){
        cout<<"NO MINIMUM"<<endl;
    } else{
        cout<<result<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<findLargest(array,n)<<endl;
    cout<<secondLargest(array,n)<<endl;
    sort(array,array+n);
    secondELement(array, n);
    return 0;
}