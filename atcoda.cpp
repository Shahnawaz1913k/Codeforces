#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mod = 1e9 + 7, fact[1000700];

long long binpow(long long val, long long deg, ll mod) {
        if (!deg) return 1 % mod;
        if (deg & 1) return (binpow(val, deg - 1, mod)*val + mod) % mod;
        long long res = binpow(val ,deg >> 1, mod);
        return (res*res + mod) % mod;
}

void f(){
    fact[0] = 1;
    for(ll i = 1; i < 1000060; i++) {
        fact[i] = fact[i-1]*i%mod;
    }
}

ll check(ll x, ll a, ll b){
    while(x){
        if(x%10 == a || x%10 == b)x/=10;
        else return 0;
    }
    return 10;
}
long long getC(int n, int i) {
        long long res = fact[n];
        long long div = fact[n-i] * fact[i];
        div %= mod;  div = binpow(div, mod - 2, mod);
        return (res * div) % mod;
}


void solve(){
    f();
    ll a, b, n, cnt = 0;
    cin >> a >> b >> n;
    for(ll i = 0; i <= n; i++){
        ll sum = a*i + b*(n-i);
        if(!check(sum, a, b)) continue;
        cnt += getC(n, i)%mod;
    }
    cnt = (cnt + mod)%mod;
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
