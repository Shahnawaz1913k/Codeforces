#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n, a[200020];
ll dp[200020][6], b[200020];

void dfs(ll i, ll l){
    if(i > n){
        for(ll i = 1; i <= n; ++i) cout << b[i] << " ";
        exit(0);
    }
    if(dp[i][l]) return;
    dp[i][l] = 1;
    for(ll j = 1; j <= 5; j++){
        if(a[i-1] < a[i] && l < j) b[i] = j, dfs(i+1, j);
        if(a[i-1] > a[i] && l > j) b[i] = j, dfs(i+1, j);;
        if(a[i-1] == a[i] && l != j) b[i] = j, dfs(i+1, j);
    }
}

void solve(){
    cin >> n;
    a[0] = 999999;
    for(ll i = 1; i <= n; ++i) cin >> a[i];
    dfs(1, 6);
    cout << -1;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}