#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i], b[i] = a[i];
    sort(a, a+n), sort(b, b+n);
    for(ll i = 0; i < n/2; i++){
        if(abs(a[i] - a[n-i-1]) == 2) ++b[i], -- b[n-1-i];
        else break;
    }
    ll cnt = 0;
    sort(b, b+n);
    for(ll i = 0; i < n; ++i) if(a[i] == b[i]) ++cnt;
    cout << cnt << endl;
    for(ll i = 0; i < n; ++i) cout << b[i] << " ";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
//   ll t;cin>>t;while(t--)
  solve();
  return 0;
}