//Getting TLE
#include <iostream>
#include <vector>
using namespace std;

int fac[100001];
int on[100001];


int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    vector<int> fac(100001,0);
    vector<int> on(100001,0);
    int m, n;
    cin >> n >> m;

    vector<bool> p(n,true);
    p[0] = p[1] = false;

    for (int i = 2; i * i <= n; i++) {
    if (p[i]) {
        for (int j = i * i; j <= n; j += i)
            p[j] = false;
    }
}

    for (int i = 0; i < m; i++){
        int t;
        vector<int> f;
        char c;
        cin >> c >> t;
        
        if(c == '-'){
            if(on[t] == 1){
                if(!p[t]){
                    for(int j = 2; j <= t; j++){
                        if(p[j]){
                            if(t % j == 0){
                                fac[j] = 0;
                            }
                        }
                    }
                }
                else{fac[t] = 0;}
                on[t] = 0;
                cout << "Success" << '\n';
            }
            else{cout << "Already off" << '\n';}
        }

        if(c == '+'){
            if(on[t]){
                cout << "Already on" << '\n';
            }
            else{
                if(!p[t]){
                    for(int c = 2; c <= t; c++){
                        if(p[c]){
                            if(t % c == 0){
                                f.push_back(c);                      
                            }
                        }
                    }
                }
                else{f.push_back(t);}

                bool v = true;
                for(int x : f){
                    if(fac[x] > 0){
                        cout << "Conflict with "<< fac[x] <<'\n';
                        v = false;
                    break;
                    }
                }

                if(v){
                    for(int x : f){
                    fac[x] = t;
                    }
                    on[t] = 1;
                    cout << "Success" << '\n';
                }
            }
        }
    }
    
    return 0; 
}