#include <iostream>
using namespace std;

int findCount(int arr[], int length, int num, int diff){
    int count=0;
    for(int i = 0;i<length;i++){
     if (abs(arr[i]-num)<=diff){
        count++;
     }
    }
    if(count==0){
        return -1;
    }
    return count;
}

int main(){
    int length, num, diff;
    int arr[20];
    cout<<"Enter size of array:";
    cin>>length;
    cout<<"Enter array value:";
    for(int i = 0; i<length;i++){
        cin>>arr[i];
    }
    cout<<"Enter num and diff:";
    cin>>num>>diff;
    cout<<findCount(arr,length,num,diff);
    return 0;
}