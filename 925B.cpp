#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, s1, s2, x1, x2;
    cin >> n >> s1 >> s2;
    x1 = s1, x2 = s2;
    if(x1 > x2) swap(x1, x2);
    ll a[n];
    pair<ll, ll> p[n];
    for(ll i =0; i < n; ++i) cin >> a[i], p[i] = {a[i], i};
    sort(p, p +n);
    vector<ll> v1, v2;
    for(ll i = 0; i < n; i++){
        ll val = ceil(x1*1.0/p[i].first);
        // cout << i << " " << val << endl;
        ll indx = i + val;
        if(indx < n) {
            // cout << p[indx].first << "  - " << (n-indx) << endl;
            if(p[indx].first*(n-indx) >= x2){
            for(ll j = i; j < indx; ++j) v1.push_back(p[j].second+1);
            for(ll j = indx; j < n; ++j) v2.push_back(p[j].second+1);
            }
        }
        if(x1 != s1) swap(v1, v2);
        cout << "YES" << endl;
        cout << v1.size() << " " << v2.size() << endl;
        for(auto &x: v1) cout << x << " ";
        cout << endl;
        for(auto &x: v2) cout << x << " ";
        return;
    }
    cout << "NO" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
//   ll t;cin>>t;while(t--)
  solve();
  return 0;
}