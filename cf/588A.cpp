#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int cost = 0;
    int minP = 101;
    cin >> n;

    for(int i = 0; i < n; i++){
        int crntP = 0;
        int crntA = 0;  
        cin >> crntA >> crntP;

        if(crntP < minP){minP = crntP ;}
        cost += minP * crntA ;
    }

    cout << cost;
    return 0;
}