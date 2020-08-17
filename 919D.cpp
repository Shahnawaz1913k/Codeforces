#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dp[300030][28], deg[300030];
vector<ll> adj[300030];

void solve(){
    ll n, m;
    cin >> n >> m;
    string c;
    cin >> c;
    c = '$'+c;
    // for(ll i = 1; i <= n; ++i) cin >> c[i], dp[i][c[i] - 'a']++;
    for(ll i = 0; i < m; ++i){
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        deg[y]++;
    }
    queue<ll> q;
    ll cnt = n, ma = 0;
    for(ll i = 1; i <= n; ++i) {
        if(!deg[i]) q.push(i);
        dp[i][c[i] - 'a']++;
    }
    while(!q.empty()){
        ll x = q.front();
        q.pop();
        --cnt;
        for(auto &i: adj[x]){
            for(ll j = 0; j < 26; ++j) dp[i][j] = max(dp[i][j], dp[x][j]+(j == (c[i] - 'a'))), ma = max(ma, dp[i][j]);
            --deg[i];
            if(!deg[i]) q.push(i);
        }
    }
    if(cnt)  cout << -1 << endl;
    else cout << ma << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}