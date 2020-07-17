#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, x;
    cin >> n >> x;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n, greater<ll>());
    ll cnt = 0, sum = 0;
    for(ll i = 0; i < n; i++) {
        //cout << sum << " " << a[i] << " " << x << endl;
        ++sum;
        if(sum*a[i] < x) continue;
        ++cnt;
        sum = 0;
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
