#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    pair<ll, ll> a[n+1];
    for(ll i = 1; i <= n; i++) a[i] = {0, i};
    while(m--){
        ll x, y;
        cin >> x >> y;
        a[y].first--;
    }
    sort(a + 1, a+n+1);
    cout << 4*n/7 << endl;
    for(ll i = 1; i <= 4*n/7; i++) cout << a[i].second << " ";
    cout << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
