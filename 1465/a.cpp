#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll r[n+10] = {0}, c[n+10] = {0};
    pair<ll, ll> p[m];
    set<ll> s;
    for(ll i = 1; i <= n; i++) s.insert(i);
    for(ll i = 0; i < m; i++) {
        cin >> p[i].first >> p[i].second;
        r[p[i].first]++;
        c[p[i].second]++;
        if(s.find(p[i].first) != s.end()) s.erase(p[i].first);
        if(s.find(p[i].second) != s.end()) s.erase(p[i].second);
    }
    ll cnt = 0;
    for(ll i = 0; i < m; i++) {
        if(p[i].first == p[i].second) continue;
        else if(r[p[i].first] + c[p[i].first] == 1) {
            c[p[i].second]--;
            if(!c[p[i].second] && !r[p[i].second]) s.insert(p[i].second);
            c[p[i].first]++;
            ++cnt;
        } else if(r[p[i].second] + c[p[i].second] == 1) {
            r[p[i].first]--;
            if(!c[p[i].first] && !r[p[i].first]) s.insert(p[i].first);
            r[p[i].second]++;
            ++cnt;
        } else {
            ll val = *s.begin();
            s.erase(val);
            r[p[i].first]--;
            c[p[i].second]--;
            r[val]++, c[val]++;
            cnt += 2;
        }
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
