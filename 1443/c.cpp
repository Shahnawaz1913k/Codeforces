#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    pair<ll , ll> p[n];
    for(ll i = 0; i < n; i++) cin >> p[i].first, p[i].first*=-1;
    for(ll i = 0; i < n; i++) cin >> p[i].second;
    sort(p, p+n);
    ll suff[n+10] = {0};
    for(ll i = n-1; i >= 0; i--) suff[i] = max(suff[i+1], -p[i].first);
    ll cnt = suff[0], sum = 0;
    for(ll i = 0; i < n; i++) {
        sum += p[i].second;
        cnt = min(cnt, max(sum, suff[i+1]));
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
