#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n , k;
    cin >> n >> k;
    int counter  = 0;
    vector<bool>p (n+1, true); 
    vector<int>pr = {0};
    p[0] = p[1] = false;

    for(int i = 2; i * i<= n; i++){
        if(p[i]){
            for(int j = i*i; j <= n; j = j + i){
                p[j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++){
        if(p[i]){pr.push_back(i);}
    }
    
    for(int i = 0; i < pr.size() - 1; i++){
        int c = pr[i]+pr[i+1]+1;
        if( c < n && p[c] ){
            counter++;
        }
    }
    if(k<=counter){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}