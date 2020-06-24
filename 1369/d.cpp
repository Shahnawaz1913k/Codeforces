#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dp[2000200], mod = 1e9 + 7;

ll fexpo(ll x, ll y){
    ll ret = 1;
    while(y){
        if(y&1) ret = (ret*x)%mod;
        y/=2;
        x = (x*x)%mod;
    }
    return ret;
}

void pre(){
    for(ll i = 3; i < 2000200; i++){
        dp[i] = (dp[i-2] + (2*(i/3) + 1)*4 )%mod;
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
