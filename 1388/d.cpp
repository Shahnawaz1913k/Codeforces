#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> adj[200020], v;
ll vis[200020], cnt = 0;

void dfs(ll x){
    vis[x] = 10;
    for(auto &i: adj[x]) if(!vis[i]) dfs(i);
    v.push_back(x);
}

void solve(){
    ll n;
    cin >> n;
    ll a[n+1], c[n+1];
    for(ll i = 1; i <= n; ++i) cin >> a[i];
    for(ll i = 1; i <= n; ++i) {
        cin >> c[i];
        if(c[i] > 0) adj[i].push_back(c[i]);
    }
    for(ll i = 1; i <= n; ++i) {
        if(vis[i]) continue;
        dfs(i);
    }
    //cout << "hey" << endl;
    reverse(v.begin(), v.end());
    vector<ll> rv;
    for(auto &i: v) if(a[i] >= 0) {
            rv.push_back(i);
            cnt += a[i];
            if(c[i] > 0) a[c[i]] += a[i];
    }
    reverse(v.begin(), v.end());
    for(auto &i: v) if(a[i] < 0) cnt += a[i], rv.push_back(i);
    cout << cnt << endl;
    for(auto &i: rv) cout << i << " ";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
