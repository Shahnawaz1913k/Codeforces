#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
  ll n, m;
  cin >> n >> m;
  string s[n];
  ll cnt = 0;
  for(ll i = 0; i < n; i++) cin >> s[i];
  for(ll i = 0; i < n -1; i++) if(s[i][m-1] == 'R')++cnt;
  for(ll i = 0; i < m -1; i++) if(s[n-1][i] == 'D')++cnt;
  cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
