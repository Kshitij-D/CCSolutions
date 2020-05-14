#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long n,t;
    cin >> n;
    

    vector<bool> p(1000001, true);
    p[0]= p[1] = false;

    for(long long i = 2; i * i <= 1000000; i++){
        if(p[i]){
            for(long long j = i * i; j <= 1000000; j=j+i){
                p[j] = false;
            }
        }
    } 

    for(int i = 0; i < n; i++){
        cin >> t;
        bool d = false;
        
        long long sq = sqrt(t);

        if(p[sq] && sq * sq == t){d = true;}
        if(d == true){
            cout << "YES"<<'\n';
        }
        else{cout << "NO"<<'\n';}


    
    }
    return 0;
}