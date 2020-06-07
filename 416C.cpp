#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll vis[2000];
set<ll> s[2000];

void solve(){
    ll n, m;
    cin >> n;
    pair<ll, pair<ll, ll > > p[n];
    for(ll i = 0; i < n; i++) cin >> p[i].second.first >> p[i].first, p[i].first*=-1, p[i].second.second = i+1;
    sort(p, p+n);
    multiset<ll> ms;
    vector<pair<ll, ll> > v;
    ll cnt = 0, x;
    cin >> m;
    for(ll i = 0; i < m; i++) cin >> x, s[x].insert(i+1), ms.insert(x);
    for(ll i = 0; i < n; i++){
        auto x = ms.lower_bound(p[i].second.first);
        if(x == ms.end()) continue;
        //cout << i << " sdfadfda " << p[i].second << " " << *x <<  endl;
        auto k = s[*x].begin();
        v.push_back({p[i].second.second, *k});
        s[*x].erase(k);
        ms.erase(x);
        cnt -= p[i].first;
    }
    cout << v.size() << " " << cnt << endl;
    for(auto &i: v) cout << i.first << " " << i.second << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
