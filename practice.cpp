//  program to insert an element in an array
#include<iostream>

using namespace std;
//int insert_element(int array[], int n, int index, int capasity, int x){
//    if(n == capasity){
//        return n;
//    }
//    for(int i=n-1; i>=index; i--){
//        array[i+1]= array[i];
//    }
//    array[index]=x;
//    return (n+1);
//}

//int deleteElement(int arr[], int n, int x)
//{
//
//    int i;
//    for (i=0; i<n; i++)
//        if (arr[i] == x)
//            break;
//
//    if (i < n)
//    {
//        n = n - 1;
//        for (int j=i; j<n; j++)
//            arr[j] = arr[j+1];
//    }
//
//    return n;
//}
int max_element(int array[], int n){
    int max = 0;
    for(int i=0; i<n; i++){
        if(array[i]>max) {
            max = array[i];
        }
    }
    return max;

}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n ; i++){
        cin>>array[i];
    }
//    n = deleteElement(array, n, 12);
//    for(int i=0; i<n; i++){
//        cout<<array[i]<<" ";
//    }

    cout<<max_element(array, n)<<endl;


}