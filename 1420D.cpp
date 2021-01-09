#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fac[300030], inv[300030], m = 998244353;

ll fexpo(ll x, ll y){
    ll res = 1;
    while(y){
        if(y&1) res = res*x%m;
        x = x*x%m;
        y/=2;
    } return res;
}

void fact(){
    fac[0] = 1;
    for(ll i = 1; i <= 300030; i++) fac[i] = fac[i-1]*i%m;
    for(ll i = 0; i <= 300030; i++) inv[i] = fexpo(fac[i], m-2);
}

ll ncr(ll n, ll r){
    if(n < r) return 0;
    return (((fac[n]*inv[r])%m)*inv[n-r]%m);
}

void solve(){
    fact();
    ll n, k;
    cin >> n >> k;
    ll l[n], r[n];
    vector<pair<ll, ll> > v;
    for(ll i = 0; i < n; i++){
        cin >> l[i] >> r[i];
        v.push_back({l[i], 1});
        v.push_back({r[i]+1, -1});
    }
    sort(v.begin(), v.end());
    ll cnt = 0, res = 0;
    for(auto &i: v){
        ll x = i.second;
        if(x == 1){
            res = (res + ncr(cnt, k-1))%m;
            ++cnt;
        } else --cnt;
    }
    cout << res << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //ll t;cin>>t;while(t--)
  solve();
  return 0;
}
