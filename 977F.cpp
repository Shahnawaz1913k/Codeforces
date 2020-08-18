#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, ma = 0;
    cin >> n;
    ll a[n], val = 0;
    map<ll, ll> dp;
    for(ll i = 0; i < n; i++) {
        cin >> a[i]; 
        dp[a[i]] = max(dp[a[i]], dp[a[i] - 1] + 1);
        ma = max(ma, dp[a[i]]);
        if(ma == dp[a[i]]) val = a[i];
    }
    vector<ll> v;
    for(ll i = n-1; i >= 0; --i) if(a[i] == val){
        v.push_back(i+1);
        --val;
    }
    reverse(v.begin(), v.end());
    cout << v.size() << endl;
    for(auto &i: v) cout << i << " ";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //ll t;cin>>t;while(t--)
  solve();
  return 0;
}