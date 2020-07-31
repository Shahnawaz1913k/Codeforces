#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll m, d, w, cnt = 0;
    cin >> m >> d >> w;
    ll x = w/__gcd(w, d-1), y = min(m, d);
    ll n = ceil(y*1.0/x); --n;
    cnt  = y*n - (x*n*(n+1))/2;
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
