#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n][m], dp[m+10][5000] = {0};
    for(ll i = 0; i < n; i++) for(ll j = 1; j <= m; j++) cin >> a[i][j];
    for(ll j = 1; j <= m; j++) for(ll k = 0; k < n; k++){
        for(ll o = 0; o < (1<<n); o++) for(ll ne = 0; ne < (1<<n); ne++) if((o&ne) == 0){
            ll cnt = 0;
            for(ll i = 0; i < n; i++) if(ne >> i & 1) cnt += a[(i+k)%n][j];
            dp[j][o^ne] = max(dp[j][o^ne], dp[j-1][o] + cnt);
        }
    }
    cout << dp[m][(1<<n) - 1] << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
