#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[200200], pre[200200];

void solve(){
    ll n, k; 
    cin >> n >> k;
    for(ll i = 1; i <= n; i++) cin >> a[i], pre[i] = pre[i-1]+a[i];
    pair<ll, ll> p[n-k+1];
    for(ll i = 0; i <= n - k; i++) p[i] = {-pre[i+k] + pre[i], i+1};
    sort(p, p + (n-k+1));
    ll ma = 0, a = p[0].second;
    for(ll i = 0; i <= n-k; i++) {
        //cout << -p[i].first << " " << p[i].second << endl;
        if((p[i].second <= a-k || p[i].second >= a+k )&& -p[i].first > ma) a = p[i].second, ma = -p[i].first;
    }
    cout << min(a, p[0].second) << " " << max(a, p[0].second) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
