#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, x;
    cin >> n >> x;
    ll a[n], cnt = 0, valsum = 0, fcnt = 0;
    for(ll i = 0; i < n; i++) cin >> a[i], cnt += a[i], fcnt += ceil(a[i]*1.0/x);
    valsum = ceil(cnt*1.0/x);
    cout << valsum << " " << fcnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
