#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mod = 1e9 + 7;

ll fexpo(ll x, ll y){
  ll res = 1;
  while(y){
    if(y&1) res = (res*x)%mod;
    y/=2;
    x = (x*x)%mod;
  }
  return res;
}

void solve(){
  ll n, mod = 1e9 + 7;
  cin >> n;
  // cout << fexpo(2,10) << endl;
  ll cnt = 1;
  for(ll i = 1; i <= n; ++i) cnt = (cnt*i)%mod;
  for(ll i = 1; i <= n; ++i) {
    // if((mod + cnt - 2*i)%mod == 16) cout << i << endl;
  }

  cnt = (mod + cnt - fexpo(2, n-1))%mod;
  cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
