#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> adj[200020], v;
ll vis[200020];

void dfs(ll x){
    vis[x] = 1;
    for(auto &i: adj[x]) if(!vis[i]) dfs(i);
    v.push_back(x);
}

void solve(){
    ll n, m;
    cin >> n >> m;
    v.clear();
    for(ll i = 0; i <= n; i++) adj[i].clear(), vis[i] = 0;
    vector<ll> a, b, ka;
    for(ll i = 0; i < m; i++){
        ll x, y, k;
        cin >> k >> x >> y;
        if(k) adj[x].push_back(y);
        ka.push_back(k);
        a.push_back(x), b.push_back(y);
    }
    for(ll i = 1; i <= n; i++) if(!vis[i]) dfs(i);
    reverse(v.begin(), v.end());
    ll indx[n+10];
    for(ll i = 0; i < n; i++) indx[v[i]] = i;
    for(ll i = 0; i < m; i++)  if(ka[i] && indx[a[i]] > indx[b[i]]){
                cout << "no" << endl;
                return;
    } 
    cout << "yes" << endl;
    for(ll i = 0; i < m; i++){
        if(indx[a[i]] > indx[b[i]]) cout << b[i] << " " << a[i] << endl;
        else cout << a[i] << " " << b[i] << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
