#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll c[1010][1010], mod = 1e9 + 7;

void comb(){
    c[0][0] = 1;
    for(ll i = 1; i < 1010; ++i){
        c[i][0] = 1;
        for(ll j = 1; j < 1010; ++j)  c[i][j] = (c[i-1][j-1] + c[i-1][j])%mod;
    }
}

void solve(){
    comb();
    string s;
    cin >> s;
    ll k;
    cin >> k;
    
    if(!k){
        cout << 1 << endl; return;
    }
    ll f[1010] = {0}, cnt = 0, ans = 0, n = s.size();
    if(k == 1){
        cout << n-1 << endl; return;
    }
    for(ll i = 2; i <= n; ++i) f[i] = f[__builtin_popcount(i)] + 1;
    for(ll i = 0; i < n; i++) if(s[i] == '1'){
        for(ll j = (i==0); j < n-i; ++j) ans = (ans + c[n-i-1][j]*(f[cnt + j] == k-1))%mod;
        cnt++;
    }
    ans = (ans + (f[cnt] == k-1))%mod;
    cout << ans << endl;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}