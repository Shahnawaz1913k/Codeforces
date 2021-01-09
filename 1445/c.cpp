#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll pf(ll x, ll y){
    ll res = 1;
    while(y--) res*= x;
    return res;
}

void solve(){
    ll p, q;
    cin >> p >> q;
    if(p%q){
        cout << p << endl; return;
    }
    ll val = q;
    map<ll, ll> mp;
    for(ll i = 2; i <= sqrt(val); i++) if(val%i == 0){
        while(val%i == 0) mp[i]++, val/=i;
    }
    if(val != 1) mp[val]++;
    ll cnt = 0;
    for(auto &i: mp){
        ll x = p;
        while(x%i.first == 0) x/=i.first;
        x *= pf(i.first, i.second - 1);
        cnt = max(cnt, x);
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
