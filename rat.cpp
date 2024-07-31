#include <iostream>
using namespace std;

int ratfood(int r, int unit, int n , int arr[]){
    int food_req = r*unit;
    int food_obt = 0;
    int count=0;
    if(n==0){
        return -1;
    }
    for(int i = 0;i<n;i++){
        if(food_obt<= food_req){
            food_obt += arr[i];
            count++;
        }
    }
    if(count==n && food_obt<food_req){
      return 0;
    }
    else{
        return count;
    }

}

int main(){
    int r = 7;
    int unit = 2;
    int n = 8;
    int arr[8] = {2, 1, 3, 1, 1, 2, 1, 2};
   

    int val = ratfood(r,unit,n,arr);
    cout<<val;
    return 0;
}