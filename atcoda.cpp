#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n;
    ll g = 0, ma = 0;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i], g = __gcd(g, a[i]), ma = max(ma, a[i]);
    cin >> k;
    cout << (k*g > ma ? -1:ma - (k-1)*g) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
