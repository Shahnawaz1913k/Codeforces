#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dp[2000200], mod = 1e9 + 7;
void pre(){
    for(ll i = 3; i < 2000200; i++){
        dp[i] = (2*dp[i-2] + dp[i-1] + (i%3 == 0 ? 4:0))%mod;
    }
}

void solve(){
    ll n;
    cin >> n;
    cout << dp[n] << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  pre();
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
