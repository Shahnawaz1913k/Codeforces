#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> adj[100010];
ll d[100010], lv[100010];

bool dfs(ll u, ll par, ll l, ll k){
    if((!l && d[u] < 3) || (1 <= l && l < k && d[u] < 4) || (l == k && d[u] !=1)) return false;
    for(auto &i: adj[u]) if(i != par && !dfs(i, u, l+1, k)) return false;
    return true;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    for(ll i = 1; i < n; ++i){
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        ++d[x], ++d[y];
    }
    queue<ll> q;
    for(ll i = 1; i <= n; ++i) if(adj[i].size() == 1) q.push(i), lv[i] = 1;
    ll root = 0;
    while(!q.empty()){
        ll x = q.front();
        q.pop();
        for(auto &i: adj[x]) if(!lv[i]){
            q.push(i);
            lv[i] = lv[x]+1;
            if(lv[i] == k+1) root = i;
        }
    }
    ll x = dfs(root, 0, 0, k);
    if(root && x) cout << "yes" << endl;
    else cout << "no" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}