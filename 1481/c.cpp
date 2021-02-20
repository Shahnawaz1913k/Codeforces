#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[n], c[m], res[m+1] = {0};
    for(ll i = 0; i < n; i++) cin >>  a[i];
    for(ll i = 0; i < n; i++) cin >>  b[i];
    for(ll i = 0; i < m; i++) cin >>  c[i], res[i] = -1;
    map<ll, set<ll>> mp2;
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) {
        if(a[i] != b[i]) mp2[b[i]].insert(i+1);
        else mp[b[i]] = i+1;
    } 
    res[m] = -1;
    for(ll i = m-1; i >= 0; --i)  {
        if(mp2[c[i]].size()) {
            ll x = *mp2[c[i]].rbegin();
            a[x-1] = c[i];
            mp[c[i]] = x;
            res[i] = x;
            mp2[c[i]].erase(x);
        }
    }
    for(ll i = 0; i < m; i++) if(mp[c[i]] && res[i] == -1) res[i] = mp[c[i]];
    for(ll i = m-1; i >= 0; --i) if(res[i] == -1) res[i] = res[i+1];
    for(ll i = 0; i < m; i++) if(res[i] < 0){
        cout << "NO" << endl;
        return;
    }
    for(ll i = 0; i < n; i++) if(a[i] != b[i]){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(ll i = 0; i < m; i++) cout << res[i] << " ";
    cout << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
