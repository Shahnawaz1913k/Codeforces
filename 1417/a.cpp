#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i =0; i < n; i++) cin >> a[i];
    ll cnt = 0;
    sort(a, a+n);
    for(ll i = 1; i < n; i++) {
        cnt += max(0ll, (k-a[i])/a[0]);
    }
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
