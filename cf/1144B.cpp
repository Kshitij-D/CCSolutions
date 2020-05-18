#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> o;
    vector<int> e;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        if(t & 1 == 1){
            o.push_back(t);
        }
        else{
            e.push_back(t);
        }
    }
    int no = o.size();
    int ne = e.size();

    sort(o.begin(), o.end());
    sort(e.begin(), e.end());

    long long int sum = 0;
    int c = (no - ne);


    if(c > 0){
        for(int i = 0; i < abs(c) - 1; i++){
            sum = sum + o[i];
        }
        cout << sum;
    }

    else{
        for(int i = 0; i < abs(c) - 1 ; i++){
            sum = sum + e[i];
        }
        cout << sum;
    }
    return 0; 
}