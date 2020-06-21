#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, x = 0;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i+=2) x = x^(a[i]^a[i+1]);
    for(ll i = 0; i < n; i++) cout << (x^a[i]) << " ";
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
