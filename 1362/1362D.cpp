//https://codeforces.com/contest/1362/problem/D
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> adj[500500];
ll vis[500500], a[500500];

void solve(){
    ll n,  m;
    cin >> n >> m;
    for(ll i = 0; i < m; i++){
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    pair<ll, ll> p[n+1];
    for(ll i = 1; i <= n; i++) cin >> p[i].first, p[i].second = i;
    for(ll i = 1; i <= n; i++) {
        set<ll> s;
        for(auto &x: adj[p[i].second]) {
            if(p[i].first == p[x].first) {cout << -1 << endl; return;}
            if(p[i].first > p[x].first) s.insert(p[x].first);
        }
        if(s.size() + 1 != p[i].first){
            cout << -1 << endl;
            return;
        }
    }
    sort(p+1, p+n+1);
    for(ll i = 1; i <= n; i++) cout << p[i].second << " ";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
