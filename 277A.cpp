#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, x;
    cin >> n;
    vector<ll> v;
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++){
        cin >> x;
        if(mp[x]) continue;
        mp[x]++;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    n = v.size();
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 2; j*v[i] <= v[n-1]; ++j){
            ll indx = lower_bound(v.begin(), v.end(), j*v[i]) - v.begin();
            cnt = max(cnt, v[indx-1]%v[i]);
        }
            cnt = max(cnt, v[n-1]%v[i]);
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
