#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  long long n,k;
  cin>>n>>k;
  vector<long long int> factors;
  for(long long i =1;i*i<=n;i++) {
    if(n%i==0) {
      factors.push_back(i);
      if(i!=n/i)
      factors.push_back(n/i);
    }
  }
  sort(factors.begin(),factors.end());
  if(k > factors.size())
    cout<<-1<<endl;
  else
  {
    cout<<factors[k-1]<<endl;
  }
  
}