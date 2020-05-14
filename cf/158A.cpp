#include <iostream>
using namespace std;

int main(){
    int n, k,t;
    int j= 0;
    cin>> n>> k;

    for(int i= 0; i< k; i++){
        
        cin>> t;
        if(t== 0){break;}
        else {j++;}        
    }

    for(int i= k; i< n; i++){
        int l;
        cin>> l;
        if(l== 0){break;}
        if(l== t){j++;}
        else {break;}        
    }

    cout<< j;
}