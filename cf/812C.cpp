#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    long long s, a[100008], w;
    cin >> n >> s;

    for (int i = 1; i < n + 1; i++){
        cin >> a[i];
    }

    int hi = n;
    int lo = 0;
    int p = 0;
    int mid;

    while(lo <= hi){
        long long b[100008];
        mid = (lo + hi)/2;
        for(int i = 1; i < n + 1; i++){
            b[i] = a[i] + (long long)i * mid;
        }

        sort(b + 1, b + n + 1);
        long long ans = 0;

        for(int i = 1; i < mid + 1; i++){
            ans += b[i];
        }

        if(ans <= s){
            w = ans;
            p = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        } 
    }
    cout << p << '\t' << w;
    return 0; 
}