#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin >> n;

    int a[1000000];
    int b[1000000];
     

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        a[i] = t;
    }
 
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        b[i] = t;   
    } 
    sort(a, a+n, greater<int>());
    sort(b, b+n, greater<int>());
    long long diff = 0;
    int ia, ib = 0;
    
    while(n--){
        if(a[ia] > b[ib]){
            diff = diff + a[ia++];
        }
        else{
            ib++;
        }

        if(b[ib] > a[ia]){
            diff = diff - b[ib++];
        }
        else{
            ia++;
        }

    }
    cout << diff << '\n';
    return 0; 
}