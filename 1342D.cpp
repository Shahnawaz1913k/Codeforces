#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], b[k];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < k; i++) cin >> b[i];
    sort(a, a+n);
    ll cnt = 0;
    for(ll i = 0; i < k; i++) {
        ll g = n - (lower_bound(a, a+n, i+1) - a);
        cnt = max(cnt, g/b[i] + !!(g%b[i]));
    }
    vector<ll> v[cnt];
    for(ll i = 0; i < n; i++) v[i%cnt].push_back(a[i]);
    cout << cnt << endl;
    for(ll i = 0; i < cnt; i++){
        cout << v[i].size() << " ";
        for(auto &x: v[i]) cout << x << " ";
        cout << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
