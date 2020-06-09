#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll has[2000], dot[2000], dp[2000][2];

void solve(){
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    string s[n];
    for(ll i = 0; i < n; i++) cin >> s[i];
    for(ll i = 0; i < m; i++) {
        for(ll j = 0; j < n; j++) s[j][i] == '#' ? has[i+1]++: dot[i+1]++;
    }
    for(ll i = 1; i <= m; i++) {
        has[i] += has[i-1];
        dot[i] += dot[i-1];
        dp[i][0] = 999999999999;
        dp[i][1] = 999999999999;
    }
    dp[1][0] = dp[1][1] = 0;
    for(ll i = 1; i <= m; i++) {
        ll xx = 99999999999999, yy = 999999999999;
        for(ll j = max(0ll, i - y); j <= i - x; ++j){
            //cout << j <<" |  " << has[i] << " " << has[j] <<  endl;
            xx = min(xx, dp[j][1] + has[i] - has[j]);
            yy = min(yy, dp[j][0] + dot[i] - dot[j]);
        }
        //cout << i << " " << xx << " " << yy << endl;
        dp[i][0] = xx, dp[i][1] = yy;
    }
    cout << min(dp[m][0] , dp[m][1]) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
