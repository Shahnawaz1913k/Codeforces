#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll m = 998244353;

ll fexpo(ll x, ll y){
    ll res = 1;
    while(y){
        if(y&1) res = res*x%m;
        x = x*x%m;
        y/=2;
    } return res;
}

ll fact(ll n){
    ll x = 1;
    for(ll i = 1; i <= n; i++) x = x*i%m;
    return x%m;
}

void solve(){
    ll n;
    cin >> n;
    ll a[2*n] = {0};
    for(ll i = 0; i < 2*n; i++) cin >> a[i];
    sort(a, a+2*n);
    ll cnt = 0, inv = fexpo(fact(n), m-2);
    for(ll i = 0; i < n; i++) cnt += abs(a[n + i] - a[i])%m;
    ll res = (m + (cnt+m)%m*fact(2*n)%m*inv%m*inv%m)%m;
    cout << res << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
