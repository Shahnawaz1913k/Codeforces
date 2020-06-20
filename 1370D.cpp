#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], v[n] = {0};
    pair<ll, ll> b[n];
    for(ll i = 0; i < n; i++) cin >> a[i], b[i] = {a[i], i};
    sort(b, b+n);
    for(ll i = k; i < n; i++) v[b[i].second] = 10;
    vector<ll> av, bv;
    ll cnt = 0;
    for(ll i = 0; i < n; i++) if(!v[i]){
        if(cnt%2) av.push_back(a[i]);
        else bv.push_back(a[i]);
        ++cnt;
    }
    sort(av.begin(), av.end());
    sort(bv.begin(), bv.end());
    cout << min(av.back(), bv.back()) << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
