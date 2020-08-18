#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll x, d;
    cin >> x >> d;
    ll cnt = __builtin_popcount(x);
    ll val = 1;
    vector<ll> v;
    while(log2(x) > 0){
        ll p = log2(x);
        x-=pow(2, p);
        for(ll i = 0; i < p; ++i) v.push_back(val);
        val+=d;
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