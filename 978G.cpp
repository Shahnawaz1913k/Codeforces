#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll s[m], d[m], cnt[m], a[n] = {0};
    pair<ll, ll> p[m];
    for(ll i = 0; i < m; ++i){
        cin >> s[i] >> d[i] >> cnt[i];
        --s[i], --d[i];
        p[i] = {d[i], i};
    }
    sort(p, p+m);
    for(ll i = 0; i < m; ++i){
        ll x = p[i].second;
        ll xx = cnt[x], val = 0;
        for(ll j = s[x]; j < d[x]; ++j)if(!a[j] && val < xx){
            a[j] = x+1;
            ++val;
        }
        if(val == xx) a[d[x]] = m+1;
        else {
            cout << -1 << endl; return;
        }
    }
    for(ll i = 0; i < n; ++i) cout << a[i] << " ";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
//   ll t;cin>>t;while(t--)
  solve();
  return 0;
}