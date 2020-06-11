#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

set<ll> adj[200];
ll vis[200];

void dfs(ll x){
    vis[x] = 10;
    for(auto &i: adj[x]) if(!vis[i]) dfs(i);
}

void solve(){
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++){
        ll s;
        cin >> s;
        if(!s) { mp[s]++; continue; }
        ll a[s];
        for(ll j = 0; j < s; j++) cin >> a[j], mp[a[j]]++;
        for(ll j = 0; j < s; j++) 
            for(ll k = 0; k < s; k++){
                adj[a[k]].insert(a[j]);
                adj[a[j]].insert(a[k]);
            }
    }
    ll cnt = 0;
    for(auto &i: mp)if(i.first && !vis[i.first]) dfs(i.first), ++cnt;
    cout << max(cnt-1, 0ll) + mp[0] << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
