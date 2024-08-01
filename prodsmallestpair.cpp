#include <iostream>
using namespace std;
#include <algorithm>

int prodsmallestpair(int arr[], int n, int sum){
    int prod;
    int check;
    if(n<2){
        return -1;
    }
    sort(arr, arr+n);
    check = arr[0]+arr[1];
    if(check<=sum){
        prod = arr[0]*arr[1];
    }else{
        prod = 0;
    }
    return prod;
}

int main(){
    int n, sum;
    int arr[20];
    cout<<"Enter the no. of elements in array:";
    cin>>n;
    cout<<"Enter the elements of array:";
    for( int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum:";
    cin>>sum;
    cout<<prodsmallestpair(arr,n,sum);
    return 0;
}