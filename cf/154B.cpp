#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0){return a;}
    return gcd(b, a%b)
}

int main(){
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        
    }
    
    return 0;
}