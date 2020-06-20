#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], cnt = 0;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < n; j++)
            for(ll k = 0; k < n; k++) cnt = max(cnt, a[i] | a[j] | a[k]);
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
