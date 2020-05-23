#include <bits/stdc++.h>
using namespace std;

int n;
long long h;
pair<int, int> a[1008];

bool chksum(int x){
    bool take  = 1;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        if(a[i].second < x){
           if(take){
            sum += a[i].first;
            }
            take ^= 1;
        }
    }
    return sum <= h;    
}

int binsrch(int lo, int hi){
    while(lo <= hi){
        int mid = (lo + hi)/2;
        if(chksum(mid)){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return hi;    
}

bool comp(pair<int, int> x, pair<int, int> y){
    if(x.first == y.first){
        return x.second < y.second;
    }
    return x.first > y.first;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cin >> n >> h;

    for (int i = 0; i < n; i++){
        cin >> a[i].first, a[i].second = i;
    }
    
    sort(a, a+n, comp);
    cout << binsrch(1, n);
    return 0; 
}