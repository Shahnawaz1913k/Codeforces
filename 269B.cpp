#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[n];
    double x;
    for(ll i = 0; i < n; i++) cin >> a[i] >> x, b[i] = 1;
    for(ll i = 0; i < n; i++)
        for(ll j = i+1; j < n; j++) if(a[j] >= a[i]) b[j] = max(b[j], b[i] + 1);
    ll cnt = *max_element(b, b+n);
    cout << n - cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
