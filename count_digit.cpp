#include <iostream>
using namespace std;

int count_digit(int l, int u, int x){
    int count = 0;
    for(int i = l;i<=u;i++){
        int temp = i;
        while(temp>0){
            int digit = temp%10;
            if(digit == x){
                count++;
                temp = temp/10;
            }
            temp = temp/10;
        }
    }
    return count;
}

int main(){
    cout<<count_digit(2,13,3);
}