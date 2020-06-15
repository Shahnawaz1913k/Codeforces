#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mint[300300][30], gcdt[300300][30], a[300300], n;
vector<ll> v;

ll f(ll x){
    for(ll i = 0; i+x-1 < n; ++i){
        ll j = log2(x);
        ll g = __gcd(gcdt[i][j], gcdt[i+x - (1<<j)][j]);
        ll k = min(mint[i][j], mint[i+x - (1<<j)][j]);
        if(g == k) return 10;
    } return 0;
}
void gen(ll x){
    for(ll i = 0; i+x-1 < n; ++i){
        ll j = log2(x);
        ll g = __gcd(gcdt[i][j], gcdt[i+x - (1<<j)][j]);
        ll k = min(mint[i][j], mint[i+x - (1<<j)][j]);
        if(g == k) v.push_back(i+1);
    }
}

void solve(){
    cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i], mint[i][0] = a[i], gcdt[i][0] = a[i];
    ll k = log2(n) + 1;
    for(ll j = 1; j <= k; ++j)
        for(ll i = 0; i + (1<<j) <= n; ++i){
            gcdt[i][j] = __gcd(gcdt[i][j-1], gcdt[i + (1<<(j-1))][j-1]);
            mint[i][j] = min(mint[i][j-1], mint[i + (1<<(j-1))][j-1]);
        }
    ll l = 1, r = n, mid, val;
    while(l <= r){
        mid = (l+r)/2;
        cerr  << l << " " << mid  << " " << f(mid) << " " << r << endl;
        if(f(mid)) val = mid, l = mid+1;
        else r = mid-1;
    }
    gen(val);
    cout << v.size() << " " << val-1 << endl;
    for(auto &i: v) cout << i << " ";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
