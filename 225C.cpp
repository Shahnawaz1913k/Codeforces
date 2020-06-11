#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[100100], up[100100], down[100100];

void solve(){
    ll n, m;
    cin >> n >> m;
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i-1] < a[i] && i > 1) up[i-1] = up[i-2] + 1;
    } up[n] = up[n-1];
    for(ll i = n; i >= 2; i--) {
        if(a[i-1] > a[i]) down[i] = down[i+1] + 1;
    } down[1] = down[2];
    while(m--){
        ll l, r, cnt = 0, mid;
        cin >> l >> r;
        
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
