#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> adj[200020];
ll a[200020], b[200020], x[200020], y[200020];
ll n, m, k, vis[200020];

bool cmp(ll a, ll b){
    return x[a] - y[a] < x[b] - y[b];
}

void fun(ll k, ll *arr){
    queue<ll> q;
    q.push(k);
    for(ll i = 0; i <= n; ++i) vis[i] = 0;
    arr[k] = 0;
    vis[k] = 10;
    while(!q.empty()){
        ll xx = q.front();
        q.pop();
        for(auto &i: adj[xx]) if(!vis[i]) {
            vis[i] = 10;
            q.push(i);
            arr[i] = arr[xx] + 1;
        }
    }
}

void solve(){
    cin >> n >> m >> k;
    for(ll i = 0; i < k; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) {
        ll xx, yy;
        cin >> xx >> yy;
        adj[xx].push_back(yy);
        adj[yy].push_back(xx);
    }
    fun(1, x);
    fun(n, y);
    ll cnt = 0, res = -1e9;
    sort(a, a+k, cmp);
    for(ll i: a){
       cnt = max(cnt, y[i] + res+1);
       res = max(res, x[i]);
    }
    cout << min(cnt, x[n]) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
