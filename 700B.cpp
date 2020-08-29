#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> adj[200020];
ll s[200020], k, cnt = 0, vis[200020];
map<ll, ll> mp;

void dfs(ll x){
    vis[x] = 10;
    if(mp[x]) s[x] = 1;
    for(auto &i: adj[x]) if(!vis[i]){
        dfs(i);
        s[x] += s[i];
    }
    cnt += min(s[x], 2*k - s[x]);
}

void solve(){
    ll n, xx;
    cin >> n >> k;
    for(ll i = 0; i < 2*k; ++i) cin >> xx, mp[xx]++;
    for(ll i = 1; i < n; ++i){
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
