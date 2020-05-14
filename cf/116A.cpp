#include <iostream>
using namespace std;

int main(){
    int n, a, b, crnt = 0;
    int max = 0;
    cin >> n;

    for (int i = 0; i < n; i++)    {
        cin>> a>> b;

        crnt = b - a + crnt;

            if(max < crnt){max = crnt;}
        
    }
    
    
    cout << max;
    return 0;
}