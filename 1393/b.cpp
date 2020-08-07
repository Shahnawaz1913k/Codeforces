#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], d[n];
    for(ll i = 0; i < n; i++) cin >> a[i], d[i] = 99999999999999;
    ll x = 99999999999999;
    for(ll i = 0; i < n; i++) {
        if(a[i] == 0) x = i;
        d[i] = min(d[i], abs(x - i));
    }
    x = 99999999999999;
    for(ll i = n-1; i >= 0; i--) {
        if(a[i] == 0) x = i;
        d[i] = min(d[i], abs(x - i));
    }
    for(ll i = 0; i < n; i++) cout << d[i] << " ";
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
