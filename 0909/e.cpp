#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[100010], vis[100010];
vector<ll> adj[100010], v;

void dfs(ll x){
    vis[x] = 10;
    for(auto &i: adj[x]) if(!vis[i]) dfs(i);
    v.push_back(x);
}

void solve(){
    ll n, m;
    cin >> n >> m;
    for(ll i = 0; i < n; ++i) cin >> a[i];
    while(m--){
        ll x, y;
        cin >> x >> y;
        adj[y].push_back(x);
    }
    for(ll i = 0; i < n; i++){
        if(vis[i]) continue;
        dfs(i);
    }
    reverse(v.begin(), v.end());
    ll t[n], cnt = 0;
    for(ll i = 0; i < n; i++) t[i] = 0;
    for(auto &i: v)if(a[i]){
        ll x = 0;
        for(auto &k: adj[i]) x = (a[k] != a[i]);
        cnt += !!x;
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
