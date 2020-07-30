#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> adj[200020], d[200020];
ll vis[200020], dep[200020];

void solve(){
    ll n, m;
    cin >> n >> m;
    for(ll i = 0; i <= n; i++) adj[i].clear(), vis[i] = 0, dep[i] = 0, d[i].clear();
    ll p[n+1], h[n+1];
    for(ll i = 1; i <= n; i++) cin >> p[i];
    for(ll i = 1; i <= n; i++) cin >> h[i];
    for(ll i = 0; i < n-1; i++){
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<ll> q;
    q.push(1);
    while(!q.empty()){
        ll x = q.front();
        vis[x] = 10;
        q.pop();
        for(auto &i: adj[x]) if(!vis[i]){
            dep[i] = dep[x] + 1;
            d[dep[i]].push_back(i);
            q.push(i);
        }
    }
    ll ma = 0;
    for(ll i = 0; i <= n; i++) ma = max(ma, dep[i]);
    for(ll i = ma; i >= 0; --i)
        for(auto &k: d[i]){
            ll b = 0, cnt = 0;
            for(auto &c: adj[k]) if(dep[c] > dep[k]) cnt += (p[c] - h[c])/2, b+=p[c];
            p[k] += b;
            ll u = (p[k] - h[k])/2;
            if((p[k]-h[k])%2  || (u > 2*cnt) || (abs(h[k]) > p[k])){
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
