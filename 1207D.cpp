#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll m = 998244353;

ll mod(ll x, ll y){
    return (x + y + m)%m;
}

void solve(){
    ll n;
    cin >> n;
    ll a[n], f[n+10], b[n], cnt = 0;
    map<ll, ll> comb, ax, bx;
    f[0] = 1;
    pair<ll, ll> p[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        p[i] = {a[i], b[i]};
        ax[a[i]]++, bx[b[i]]++;
        f[i+1] = f[i]*(i+1)%m;
    }
    cnt = f[n];
    ll val1 = 1, val2 = 1, val3 = 1;
    for(auto &i: ax) if(i.second > 1) val1 = val1*f[i.second]%m;
    for(auto &i: bx) if(i.second > 1) val2 = val2*f[i.second]%m;
    cnt = mod(cnt, -val1);
    cnt = mod(cnt, -val2);
    sort(p, p+n);
    ll l = 0, d = 1;
    while(l < n){
        ll r = l+1;
        while(r < n && p[l].first == p[r].first) ++r;
        map<ll, ll> mp;
        for(ll i = l; i < r; i++) ++mp[p[i].second];
        for(auto &i: mp) d = d*f[i.second]%m;
        l = r;
    }
    for(ll i = 1; i < n; i++) if(p[i-1].second > p[i].second) d = 0;
    cnt = mod(cnt, d);
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
