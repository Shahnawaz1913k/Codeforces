#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    pair<ll, ll> p[n];
    for(ll i = 0; i < n; ++i) cin >> a[i], p[i] = {a[i], i};
    sort(a, a+n), sort(p, p+n);
    if(n < 3){
        cout << 1 << endl; return;
    }
    map<ll, ll> mp;
    for(ll i = 1; i < n; ++i){
        mp[a[i] - a[i-1]]++;
    }
    ll d1 = a[2] - a[1], d2 = a[n-2] - a[n-3], d3 = a[1] - a[0], d4 = a[n-1] - a[n-2];
    // cout << mp[d1] << " " << mp[d2] << endl;
    mp[d3]--;
    if(mp[d1] == n-2){
        cout << p[0].second + 1 << endl; return;
    }
    mp[d3]++;
    mp[d4]--;
    if(mp[d2] == n-2){
        cout << p[n-1].second + 1 << endl; return;
    }
    mp[d4]++;
    for(ll i = 1; i < n-1; ++i){
        ll x = a[i] - a[i-1], y = a[i+1] - a[i];
        ll z = a[i+1] - a[i-1];
        mp[x]--, mp[y]--;
        if(mp[z] + 1 == n-2) {
            cout << p[i].second + 1 << endl;
            return;
        }
        mp[x]++, mp[y]++;
    }
    cout << -1 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}