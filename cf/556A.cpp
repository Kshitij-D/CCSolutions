#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int os= 0;
    int zs= 0;

    string s;
    cin>> n;
    cin>> s;

    for(int i= 0; i< n; i++){
        if(s[i]== '0'){zs++;}
        if(s[i]== '1'){os++;}
    }

    if(os- zs== 0){cout<< 0;}
    else{cout<<n- 2* min(os, zs);}
    return 0;
}