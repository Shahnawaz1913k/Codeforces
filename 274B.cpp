#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> adj[100100];
ll val[100100], vis[100100], inc[100100], de[100100];

void dfs(ll x){
    vis[x] = 10;
    for(auto &i: adj[x]) if(!vis[i]){
        dfs(i);
        inc[x] = max(inc[i], inc[x]);
        de[x] = max(de[i], de[x]);
    }
    val[x] += inc[x] - de[x];
    if(val[x] < 0) inc[x] -= val[x];
    else de[x] += val[x];
}

void solve(){
    ll n;
    cin >> n;
    for(ll i = 1; i < n; i++){
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(ll i = 1; i <= n; i++) cin >> val[i];
    dfs(1);
    cout << inc[1] + de[1] << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
