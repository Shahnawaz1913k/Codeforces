#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i], b[i] = a[i];
    for(ll i = 1; i < n; i++) b[i] += b[i-1];
    ll indx = upper_bound(b, b+n, k) - b;
    ll cnt = indx, pos = 0;
    //cout << cnt << endl;
    for(ll i = 0; i < n; i++){
        ll indx = upper_bound(b, b+n, k + a[i]) - b;
        //cout << i << " "<< indx << endl;
        if(indx-1 > cnt)cnt = indx -1, pos = i+1;
    }
    cout << pos << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
