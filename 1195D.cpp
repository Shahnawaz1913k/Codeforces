#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll m = 998244353;

ll mod(ll a, ll b){
    return (m+a+b)%m;
}

ll sum1(ll l, vector<ll> v){
    ll res = 0, p = 1;
    for(ll i = 0; i < max(l, (ll)v.size()); i++){
        if(i < v.size()){
            res = mod(res, v[i]*p%m);
            p = p*10%m;
        }
        if(i < l) p = p*10%m;
    } return res;
}

ll sum2(ll l, vector<ll> v){
    ll res = 0, p = 1;
    for(ll i = 0; i < max(l, (ll)v.size()); i++){
        if(i < l) p = p*10%m;
        if(i < v.size()){
            res = mod(res, v[i]*p%m);
            p = p*10%m;
        }
    } return res;
}

void solve(){
    ll n;
    cin >> n;
    string s[n];
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) cin >> s[i], mp[s[i].size()]++;
    ll cnt = 0;
    for(ll i = 0; i < n; i++) {
        vector<ll> v;
        for(ll j = s[i].size() - 1; j >= 0; j--) v.push_back(s[i][j] - '0');
        for(auto &i: mp){
            ll x = i.second*sum1(i.first, v);
            ll y = i.second*sum2(i.first, v);
            cnt = mod(cnt, x);
            cnt = mod(cnt, y);
        }
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
