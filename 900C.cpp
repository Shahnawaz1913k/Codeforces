#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], cnt[n+1] = {0};
    for(ll i = 0; i < n; ++i) cin >> a[i];
    set<ll> s;
    for(ll i = 0; i < n; ++i){
        s.insert(a[i]); 
        auto x = s.upper_bound(a[i]);
        ll k = *s.rbegin();
        // cout << *x << " " << k << endl;
        if(x == s.end()) cnt[a[i]]--;
        else if(*x == k) cnt[k]++;
    }
    ll ma = -1, indx = 1;
    for(ll i = 1; i <= n; i++) {
        // cout << i << " " << cnt[i] << endl;
        if(cnt[i] > ma) ma = cnt[i], indx = i;
    }
    cout << indx << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
//   ll t;cin>>t;while(t--)
  solve();
  return 0;
}