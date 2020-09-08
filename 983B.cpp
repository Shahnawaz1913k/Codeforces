#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dp[5050][5050], a[5050][5050];

void solve(){
    ll n, m;
    cin >> n;
    for(ll i = 0; i < n; ++i) cin >> dp[0][i], a[0][i] = dp[0][i];
    for(ll i = 1; i < n; ++i) {
        for(ll j = 0; j < n-i; ++j) {
            a[i][j] = a[i-1][j]^a[i-1][j+1];
            dp[i][j] = max({dp[i-1][j], dp[i-1][j+1], a[i-1][j]^a[i-1][j+1]});
            // cout <<a[i][j] << " | " << dp[i][j] << " ";
        }
        // cout << endl;
    }
    cin >> m;
    while(m--){
        ll l, r;
        cin >> l >> r;
        cout << dp[r-l][l-1] << endl;
    }
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}