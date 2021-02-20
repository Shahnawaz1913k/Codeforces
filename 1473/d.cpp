#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    ll pre[n] = {0}, suf[n] = {0};
    ll premi[n] = {0}, prema[n] = {0}, sufmi[n] = {0}, sufma[n] = {0};
    pre[0] = (s[0] == '-' ? -1:1);
    suf[n-1] = (s[n-1] == '-' ? -1:1);
    for(ll i = 1; i < n; i++) pre[i] = pre[i-1] + (s[i] == '-' ? -1:1);
    for(ll i = n-2; i >= 0; --i) suf[i] = suf[i+1] + (s[i] == '-' ? -1:1);
    for(ll i = 0; i < n; i++){
        premi[i] = min(premi[i-1], pre[i]);
        prema[i] = max(prema[i-1], pre[i]);
    }
    for(ll i = n-1; i >= 0; --i){
        sufmi[i] = min(sufmi[i+1], suf[i]);
        sufma[i] = max(sufma[i+1], suf[i]);
    }
    while(q--){
        ll l, r;
        cin >> l >> r;
        --l, --r;
        ll cmi = (l == 0 ? 0: premi[l-1]);
        ll cma = (l == 0 ? 0: prema[l-1]);
        ll val = (l == 0 ? 0: pre[l-1]);
        ll fmi = ()
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
