#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll check(ll x, ll k, ll ax[], ll n){
    ll cnt = 0;
    ll a[n], pre[n];
    for(ll i = 0; i < n; i++) a[i] = ax[i];
    a[0] += x;
    pre[0] = a[0];
    for(ll i = 1; i < n; i++){
        pre[i] = pre[i-1] + a[i];
        ll l = 100*a[i], r = k*pre[i-1];
        if(l <= r) ++cnt;
    }
    if(cnt == n - 1) return 1;
    return 0;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], cnt = 1e18;
    for(ll i = 0; i < n; i++) cin >> a[i];
        ll l = 0, r = 1e16, mid, val = 1e16;
        while(l <= r){
            mid = (l+r)/2;
            if(check( mid, k, a, n)) r = mid - 1, val = mid;
            else l = mid+1;
        }
        cnt = min(cnt, val);
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
