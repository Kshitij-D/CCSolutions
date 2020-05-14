#include <iostream>
using namespace std;

int main(){
    int n = 0;
    string s = "";
    int cnt = 0;

    cin>> n>> s;

    for (int i = 0; i < n; i++)
    {
        if(s[i]==s[i+1]){cnt++;}
    }

    cout<< cnt;
    
    return 0;
}