#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[k+1];
    for(ll i = 1; i < 2*k - n; i++) cout << i << " ";
    for(ll i = k; i >= 2*k - n; i--) cout << i << " ";
    cout << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
