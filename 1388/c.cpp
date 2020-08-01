#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> adj[200020];
ll h[200020];
ll vis[200020], p[200020];

void dfs(ll x, ll h){
    vis[x] = h;
    for(auto &i: adj[x]) if(!vis[i]){
        dfs(i, h+1);
        p[x] += p[i];
    }
}

void solve(){
    ll n, m;
    cin >> n >> m;
    for(ll i = 0; i <= n; i++) adj[i].clear(), vis[i] = 0;
    for(ll i = 1; i <= n; i++) cin >> p[i];
    for(ll i = 1; i <= n; i++) cin >> h[i];
    for(ll i = 0; i < n-1; i++){
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1, 1);
    for(ll i = 1; i <= n; i++){
        ll cnt = 0, g = (p[i] + h[i])/2;
        for(auto &k: adj[i]) if(vis[k] > vis[i]) cnt += (p[k] + h[k])/2;
        if(cnt > g || (p[i] + h[i])%2 || !(0 <= g && g <= p[i])){
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
