#include<bits/stdc++.h>
using namespace std;
// typedef long long int int;

int dp[1005], mod = 998244353;
int c[1010][1010];

void fermat(){
  for(int i = 0; i <= 1010; ++i){
    for(int j = 1; j < i; ++j) c[i][j] = (c[i-1][j-1] + c[i-1][j])%mod;
  }
}

void solve(){
 int n;
 cin >> n;
 int a[n+1], cnt = 0;
 dp[n+1] = 1;
 for(int i = 1; i <= n; i++) cin >> a[i];
 for(int i = n; i >= 1; --i){
    if(a[i] <= 0) continue;
    for(int j = i+a[i]; j <= n; ++j){
      // cout << i << " " << j << endl;
        dp[i] = (dp[i] + c[j-i][a[i]]*dp[j+1])%mod;
    }
    cnt =(cnt + dp[i])%mod;
  //  cout << i << " here " << dp[i] << endl;
  }
  cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  fermat();
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}