#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll z = n-m, g = m+1;
    ll k = floor(z*1.0/g);
    ll cnt = n*(n+1)/2 - k*(k+1)*g/2 - (z%g)*(k+1);
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}