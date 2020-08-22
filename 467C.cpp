#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dp[5050][5050], p[5050];

void solve(){
    ll n, m, k, cnt = 0;
    cin >> n >> m  >> k;
    ll a[n+1];
    for(ll i = 1; i <= n; ++i) cin >> a[i], p[i] = p[i-1] + a[i];
    for(ll i = 1; i <= k; ++i){
        for(ll j = 1; j <= n; ++j){
            if(i*m > j) continue;
            dp[i][j] = max(dp[i][j-1], dp[i-1][j-m] + p[j] - p[j-m]);
            if(i == k) cnt = max(cnt, dp[i][j]);
            // cout << j << endl;
        }
        // cout << i << " : " << dp[i][n] << endl;
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
//   ll t;cin>>t;while(t--)
  solve();
  return 0;
}