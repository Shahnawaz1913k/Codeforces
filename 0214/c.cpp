#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, mi = 9999999999999;
    cin >> n;
    vector<ll> v[4], req[n+1];
    for(ll i = 1; i <= n; i++){
        ll x;
        cin >> x;
        v[x].push_back(i);
    }
    for(ll i = 1; i <= n; i++){
        ll sz, x;
        cin >> sz;
        for(ll j = 0; j < sz; ++j){
            cin >> x;
            req[i].push_back(x);
        }
    }
    ll cnt = 0, i = 0;
    map<ll, ll> mp;
    for(ll ki = 0; ki < 3; ki++){
        i = ki;
    while(1){
            for(ll j = 0; j < v[i%3+1].size(); ++j)  if(!mp[v[i%3+1][j]]){
                ll ccnt = 0;
               for(auto &k: req[v[i%3+1][j]]) if(mp[k]) ++ccnt;
               if(ccnt == req[v[i%3+1][j]].size()) {
                   ++cnt; mp[v[i%3+1][j]]++;
                   j = -1;
               }
            }
            ll ccnt = 0;
            for(auto &k: mp) if(k.second) ++ccnt;
            if(ccnt == n) break;
            ++cnt, ++i;
    }
    mi = min(mi, cnt);
    cnt = 0;
    mp.clear();
    }
    cout << mi << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
