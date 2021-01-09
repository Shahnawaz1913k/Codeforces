#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, mod = 998244353;
    cin >> n;
    ll a[n], two[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    two[0] = 1;
    for(ll i = 1; i < n; i++) two[i] = two[i-1]*2%mod;
    ll cnt = a[n-1];
    for(ll i = 0; i < n-1; i++){
        cnt = (cnt + (a[i]*(n-i+1)%mod)*two[n-i-2]%mod)%mod;
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
