#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll f(ll a[], ll j, ll k, ll n){
    ll b[n];
    ll cnt = 0;
    for(ll i = 0; i < n; ++i) b[i] = a[i];
    for(ll i = 0; i < n; ++i) {
        cnt += b[i]/j;
        ll x = b[i]%j;
        if(i < n-1) if(x + b[i+1] >= j) b[i+1] -= (j-x), ++cnt;
    }
    // cout << j << " check " << cnt << endl;
    return (cnt >= k);
}

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    for(ll i = 0; i < n; ++i) cin >> a[i], b[i] = a[i];
    ll l = 1, h = 1e15, m = 0, cnt = 0;
    while(l <= h){
        m = (l+h)/2;
        if(f(a, m, k, n)) l = m + 1, cnt = m;
        else h = m-1;
    }
    cout << cnt*k << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}