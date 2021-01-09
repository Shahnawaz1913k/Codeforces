#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dp[5050][5050];

void solve(){
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    ll cnt = 0;
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= m; j++){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) - 1;
            dp[i][j] = max(0ll, dp[i][j]);
            if(a[i-1] == b[j-1]) dp[i][j] = max(dp[i][j], dp[i-1][j-1]+2);
            dp[i][j] = max(0ll, dp[i][j]);
            cnt = max(cnt, dp[i][j]);
        }
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
