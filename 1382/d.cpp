#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    n*=2;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll l = 0, r = n-1;
    vector<ll> len;
    while(l<=r){
        ll ma = -1, indx = -1;
        for(ll i = l; i <= r; ++i) if(a[i] > ma) ma = a[i], indx = i;
        len.push_back(r-indx+1);
        r = indx-1;
    }
    ll sum = n/2, m = len.size();
    bool sub[m+10][sum];
    for(ll i = 0; i <= m; i++) sub[i][0] = true;
    for(ll i = 1; i <= sum; i++) sub[0][i] = false;
    for(ll i = 1; i <= m; ++i)
        for(ll j = 1; j <= sum; ++j){
            if(len[i-1] <= j) sub[i][j] = sub[i-1][j] || sub[i-1][j-len[i-1]];
            else sub[i][j] = sub[i-1][j];
        }
    cout << (sub[m][sum] ? "yes":"no") << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
