#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin>> n>> m;
    vector<int> v;

    for(int i= 0; i< m; i++){
        int t;
        cin>> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    int d= 1e5;
    for(int i= 0;i< m- n+ 1; i++){
        d = min(v[n- 1+ i]- v[i], d);
    }

    cout<< d;
    return 0;
}