#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n, d;
    d = 1;
    cin >> n;
    while(n){
        if(n == 3){
        cout << d << ' ' << d << ' ' << d*3;
        break;
        }
        
        for(int j = 0; j < (n + 1)/2; j++){
            cout << d <<' ';
        }

        d = d << 1;
        n = n >> 1;
    }
    return 0; 
}