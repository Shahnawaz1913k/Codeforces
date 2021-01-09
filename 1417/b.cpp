#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], cnt = 0;
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) cin >> a[i], mp[a[i]]++;
    ll x = 0, b[n] = {0};
    if(k%2 == 0) x = mp[k/2]/2;
    else x = mp[k/2];
    for(ll i = 0; i < n; i++) {
        if(a[i] < k/2) continue;
        else if(a[i] == k/2 && x) --x;
        else b[i] = 1;
    }
    for(ll i = 0; i < n; i++) cout << b[i] << " ";
    cout << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
