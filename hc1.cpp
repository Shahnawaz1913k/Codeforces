#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k, w, mod = 1e9 + 7;
    cin >> n >> k >> w;
    ll l[n], h[n];
    for(ll i = 0; i < k; ++i) cin >> l[i];
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    for(ll i = 0; i < k; ++i) cin >> h[i];
    ll a2, b2, c2, d2;
    cin >> a2 >> b2 >> c2 >> d2;
    for(ll i = k; i < n; ++i){
        l[i] = (a*l[i-2] + b*l[i-1] + c)%d + 1;
        h[i] = (a2*h[i-2] + b2*h[i-1] + c2)%d2 + 1;
    }
    ll cnt = 1, ma = 0, indx = 0, sum = 0, x = 0;
    for(ll i = 0; i < n; ++i){
        ma = max(ma, h[i]);
        // cout << l[i-1] + w << "  - " << l[i] << endl;
        if(i) if(l[i-1] + w < l[i]) sum = x,  indx = i, ma = h[i];
        x = (sum + 2*(l[i] - l[indx] + w + ma))%mod,
        // cout << i << " " << l[i] << " " << h[i] << " " << x << " " << sum << endl;
        cnt = (cnt*x)%mod;
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}