#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    pair<ll, ll> r[n], l[m];
    for(ll i = 0; i < n; i++) cin >> r[i].first >> r[i].second;
    for(ll i = 0; i < m; i++) cin >> l[i].first >> l[i].second;
    ll a[1000010] = {0};
    for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++){
        ll dx = l[i].first - r[i].first;
        ll dy = l[i].second - r[i].second + 1;
        if(dx >= 0) a[dx] = max(a[dx], dy);
    }
    for(ll i = 1000009; i >= 0; i--) a[i] = max(a[i], a[i+1]);
    ll cnt = 0;
    for(ll i = 0; i < 1000010; i++) cnt = max(cnt, a[i]);
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //ll t;cin>>t;while(t--)
  solve();
  return 0;
}
