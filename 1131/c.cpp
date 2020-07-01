#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for(ll i = 0; i < n; i+=2) cout << a[i] << " ";
    for(ll i = n - (n%2 ? 2:1); i >= 0; i-=2) cout << a[i] << " ";
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
