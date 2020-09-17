#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], pre[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    pre[0] = a[0];
    for(ll i = 1; i < n; i++) pre[i] = pre[i-1] + a[i];

}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
