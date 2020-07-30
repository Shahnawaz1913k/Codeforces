#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k, z, ma = 0;
    cin >> n >> k >> z;
    ll a[n], pre[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    pre[0] = a[0];
    for(ll i = 1; i < n; i++) pre[i] = pre[i-1] + a[i];
    z = min(z, k/2);
    for(ll i = 0; i <= z; i++){
        ll cnt = pre[k-2*i], x = a[0] + a[1];
        for(ll j = 1; j <= k- 2*i; ++j) x = max(x, a[j] + a[j+1]);
        ma = max(ma, cnt + i*x);
    }
    cout << ma << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
