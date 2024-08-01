
#include <iostream>
using namespace std;

int OperationsBinaryString(char *str){
    if(str==NULL){
        return -1;
    }
    int a = *str -'0';
    str++;
    while(*str!='\0'){
        char p = *str;
        str++;
        if(p == 'B'){
            a&=(*str-'0');
        }else if(p == 'B'){
           a|=(*str-'0');
        }else{
            a^=(*str-'0');
        }
        str++;
    }
    return a;
}

int main(){
    string s;
    getline(cin,s);
    char *str = &s[0];
    cout<<OperationsBinaryString(str);
    return 0;
}