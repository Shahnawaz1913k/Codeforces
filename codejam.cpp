#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> adj[100010];
ll vis[100010], cnta[100010], cntb[100010];

void dfs(ll x, ll a, ll b, ll h){
    vis[x] = h;
    //cout << "visiting " << x << " " << h << endl;
    cnta[x] = 1, cntb[x] = 1;
    for(auto &i: adj[x]) if(!vis[i]){
        dfs(i, a, b, h+1);
    }
    if(vis[x] > a) cnta[vis[x]-a] += cnta[x];
    if(vis[x] > b) cntb[vis[x]-b] += cntb[x];
}

void solve(ll t){
    ll n, a, b, cnt = 0;
    cin >> n >> a >> b;
    ll arr[n];
    for(ll i = 1; i <= n; i++) adj[i].clear(), vis[i] = 0, cnta[i] = 0, cntb[i] = 0;
    for(ll i = 1; i < n; i++) cin >> arr[i], adj[arr[i]].push_back(i+1);
    dfs(1, a, b, 1);
    for(ll i = 1; i <= n; i++) {
        cnt += (n*(cnta[i] + cntb[i]) - cnta[i]*cntb[i]);
        //cout << i << " | " << cnta[i] << " " << cntb[i] << endl;
    }
    double x = cnt*1.0/(n*n);
    cout << setprecision(14) << fixed << x << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;
  for(ll i = 1; i <= t; i++) solve(i);
  return 0;
}
