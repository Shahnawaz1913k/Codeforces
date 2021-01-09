#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mod = 998244353, num[500050], inv[500050];

ll ch(ll x, ll y){
    ll res = 1;
    while(y){
        if(y&1) res = res*x%mod;
        x = x*x%mod;
        y/=2;
    } return res;
}

void f(){
    num[0] = 1;
    inv[0] = ch(1, mod - 2);
    for(ll i = 1; i <= 500050; i++){
        num[i] = num[i-1]*i%mod;
        inv[i] = ch(num[i], mod - 2);
    }
}

void solve(){
    f();
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    for(ll i = 1; i <= n/k; i++) if(n/i >= 1) {
        ll x = n/i;
        cnt = (cnt + (num[x-1]*inv[k-1]%mod)*inv[x - k]%mod)%mod;
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
