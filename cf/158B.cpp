#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    vector<int> s(5, 0);
    cin >> n;

    for(int i= 0; i< n; i++){
        int t ;
        cin >> t ;
        s[t] += 1 ;
            
    }

    int ntaxi = s[4] + s[2]/2 + s[3];

    if(s[1] > s[3]){
        s[1] -= s[3] ;
        ntaxi += (s[1] + 2 * (s[2] % 2)) / 4;
        if((s[1] + 2 * (s[2] % 2)) % 4 != 0){ntaxi++;}
    }   
    
    else{
        ntaxi += s[2] % 2;
    }

    cout << ntaxi;
    return 0;
}