#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n], f[n], ba[n];
    pair<ll, ll> p[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i], p[i] = {b[i], i};
    sort(p, p + n);
    map<ll, ll> mp1, mp2;
    for(ll i = 0; i < n; i++){
        //cout << p[a[i]-1].second << endl;
        ll x = p[a[i]-1].second - i, y = i - p[a[i]-1].second;
        f[i] = (x >= 0 ? x : n+x);
        ba[i] = (y >= 0 ? y : n+y);
        //cout << i << " | " <<x << " : " << f[i] << " | " << y << " : " << b[i] << endl;
        mp1[f[i]]++; mp2[ba[i]]++;
    }ll cnt = 0;
    for(auto &i: mp1) cnt = max(cnt, i.second);
    for(auto &i: mp1) cnt = max(cnt, i.second);
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
