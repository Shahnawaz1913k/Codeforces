#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], t[n], cnt = 0, sum = 0;
    for(ll i = 0; i < n; ++i) cin >> a[i];
    t[0] = 1;
    for(ll i = 1; i < n; ++i) t[i] = max(t[i-1], a[i]+1);
    for(ll i = n-2; i >= 0; --i) t[i] = max(t[i+1]-1, t[i]);
    for(ll i = 0; i < n; ++i) cnt += (t[i] - (a[i]+1));
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
//   ll t;cin>>t;while(t--)
  solve();
  return 0;
}