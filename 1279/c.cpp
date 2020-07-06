#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) cin >> a[i], mp[a[i]] = i;
    for(ll i = 0; i < m; i++) cin >> b[i];
    ll pos = -1, cnt = 0;
    for(ll i = 0; i < m; i++) {
        //cout << pos << " " << mp[b[i]] << endl;
        if(mp[b[i]] > pos) cnt += (2*(mp[b[i]] - i) + 1);
        else cnt++;
        pos = max(pos, mp[b[i]]);
    }
    cout <<cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
