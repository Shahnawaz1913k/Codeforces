#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dp[5000][5000];

void solve(){
    ll n, cnt = 1;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) if(!mp[a[i]]) mp[a[i]] = cnt++;
    for(ll i = 0; i < n; i++) a[i] = mp[a[i]] - 1;
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < n; j++) dp[i][j] = 1;
    cnt = 0;
    for(ll i = 0; i < n; i++) for(ll j = 0; j < i; j++) dp[i][a[j]] = max(dp[i][a[j]], 1 + dp[j][a[i]]);
    for(ll i = 0; i < n; i++) for(ll j = 0; j < n; j++) cnt = max(cnt, dp[i][a[j]]);
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
