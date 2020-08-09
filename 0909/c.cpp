#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dp[5050][5050], mod = 1e9 + 7;

void solve(){
    ll n, fcnt = 0;
    cin >> n;
    dp[0][0] = 1;
    char a[n+10];
    ll cnt = 0;
    cin >> a[0];
    for(ll i = 1; i < n; ++i){
      cin >> a[i];
      if(a[i-1] == 'f'){
        for(ll j = 1; j < n; j++) dp[i][j] = dp[i-1][j-1];
      } else {
        for(ll j = n-1; j >= 0; --j) dp[i][j] = (dp[i][j+1] + dp[i-1][j])%mod;
      }
    }
    for(ll i = 0; i < n; ++i) cnt = (cnt + dp[n-1][i])%mod;
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
