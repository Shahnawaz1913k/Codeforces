#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for(ll i = 0; i < n; ++i) cin >> a[i];
    for(ll i = 0; i < m; ++i) cin >> b[i];
    for(ll i = n-1; i >= 0; --i){
        ll g = 0;
        for(ll j = 0; j <= i; ++j) g = __gcd(g, a[j]);
        ll val = 1;
        for(ll j = 0; j < m && g >= b[j]; ++j){
            while(g%b[j] == 0) val*=b[j], g/=b[j];
        }
        for(ll j = 0; j <= i; ++j) a[i]/=val;
    }
    ll cnt = 0;
    for(ll i = 0; i < n; ++i){
        
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--) 
  solve();
  return 0;
}
