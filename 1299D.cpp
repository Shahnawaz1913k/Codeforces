#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll x[n], y[n];
    for(ll i = 0; i < n; ++i) cin >> x[i] >> y[i];
    if(n%2){
        cout << "NO" << endl; return;
    }
    for(ll i = 1; i < n/2; ++i) if(x[i] + x[i+n/2] != x[0] + x[n/2] || y[i] + y[i+n/2] != y[0] + y[n/2]){
        cout << "NO" << endl; return;
    }
    cout << "YES" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
