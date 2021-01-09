#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, x;
    cin >> n >> x;
    ll a[n], b[n] = {0};
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        ll val = a[i], cnt = 1;
        while(val%x == 0) { val/=x; ++cnt; }
        b[i] = cnt;
        //cout << i << " | " << b[i] << endl;
    }
    ll mi = 0, mval = 99999999999999;
    for(ll i = 0; i < n; i++) if(b[i] < mval){
        mval = b[i];
        mi = i;
    }
    ll cnt = 0;
    for(ll i = mi; i < n; i++) cnt += mval*a[i];
    for(ll i = mi-1; i >= 0; i--){
        cnt += (mval+1)*a[i];
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
