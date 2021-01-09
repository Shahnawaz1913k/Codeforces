#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n+1], sum = 0;
    for(ll i = 1; i <= n; ++i) cin >> a[i], sum += a[i];
    if(sum%n){
        cout << -1 << endl; return;
    }
    ll val = sum/n;
    cout << 3*(n-1) << endl;
    for(ll i = 2; i <= n; ++i) {
        ll x = 0;
        if(a[i]%i){
            ll val = i - a[i]%i;
            cout << 1 << " " << i << " " << val << endl;
            a[1] -= val;
            a[i] += val;
        } else  cout << 1 << " " << i << " " << 0 << endl;
        x = a[i]/i;
        cout << i << " " << 1 << " " << x << endl;
        a[1] += a[i];
        a[i] = 0;
    }
    for(ll i = 2; i <= n; ++i){
        cout << 1 << " " << i << " " << val << endl;
        a[i] = val;
        a[1] -= val;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
