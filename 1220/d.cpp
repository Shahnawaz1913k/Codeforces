#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], p[n];
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        ll x = a[i], cnt = 0;
        while(x%2 == 0) ++cnt, x/=2;
        p[i] = cnt;
        mp[cnt]++;
    }
    ll m = 0, po = 0;
    for(auto &i: mp) if(i.second > m) m = i.second, po = i.first;
    vector<ll> v; 
    for(ll i = 0; i < n; i++) {
        if(p[i]!=po) v.push_back(a[i]);
    }
    cout << v.size() << endl;
    for(auto &i: v) cout << i << " ";
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
