#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    long long d[200008];
    cin >> n;
    for (int  i = 1; i < n + 1; i++){
        cin >> d[i];
    }

    long long s1 = 0; 
    long long s3 = 0;
    long long ans = 0;
    int lo = 1;
    int hi = n;

    while(lo <= hi){
        if(s1 < s3){
            s1 += d[lo++];
        }
        else if(s1 > s3){
        s3 += d[hi--];
        }
        else{
            ans = s1;
            s1 += d[lo++];
        }
    }
        if(s1 == s3){ans = s1;}
        cout << ans << '\n';
    
    return 0; 
}