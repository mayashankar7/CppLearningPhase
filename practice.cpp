#include<bits/stdc++.h>

using  namespace std;

int main(){
    int n=15;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min=100;
    int max=0;
    int sum=0;
    for(int i=0; i<n; i++ ){
        if(arr[i] >max){
            max=arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
        sum = sum +arr[i];
    }
    cout<<max<<"\t"<<min<<endl;
    cout<<sum/15.0<<endl;
    return 0;
}
