#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll cnt[200][200];

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m], x = 0, y = 0;
    for(ll i = 0; i < n; i++) cin >> a[i], x^=a[i];
    for(ll i = 0; i < m; i++) cin >> b[i], y^=b[i];
    if(x == y) cout << "YES" << endl;
    else {
        cout << "NO" << endl; return;
    }
    for(ll i = 0; i < m; i++) cnt[0][i] = b[i];
    for(ll i = 0; i < n; i++) cnt[i][0] = a[i];
    for(ll i = 1; i < m; i++) cnt[0][0]^=b[i];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; ++j) cout << cnt[i][j] << " ";
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