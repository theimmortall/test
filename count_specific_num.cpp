#include <iostream>
using namespace std;

int count_specific(int m, int n){
    if(m>n){
        return -1;
    }else{
        for(int i = m;i<=n;i++){
            while(i>0){
                int num = i%10;
                if(num ==1 || num==4 || num==9){
                    
                }
                num = num/10;
                
            }
        }
    }
}