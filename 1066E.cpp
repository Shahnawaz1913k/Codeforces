#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    string st(abs(n-m), 'a');
    if(n > m) b = st + b;
    else a = st + a;
    n = max(n, m);
    ll pre[n], mod = 998244353;
    ll two[n+1], cnt = 0;
    pre[0] = (b[0] - '0'), two[0] = 1;
    for(ll i = 1; i < n; ++i)  pre[i] = pre[i-1] + (b[i] - '0'), two[i] = (two[i-1]*2)%mod;
    for(ll i = 0; i < n; ++i) if(a[i] == '1') {
       cnt = (cnt + pre[i]*two[n-1-i])%mod;
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