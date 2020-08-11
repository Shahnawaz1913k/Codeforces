#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> v[200020];

void solve(){
  ll n, q;
  cin >> n >> q;
  ll a[n];
  for(ll i = 0; i < n; i++) cin >> a[i], v[a[i]].push_back(i);
  for(ll i = 1; i <= q; ++i) if(v[i].size() > 1){
    for(ll j = 1; j < v[i].size(); ++j) if(v[i][j] - v[i][j-1] > 1){
      cout << "no" << endl;
      return;
    }
  }
  cout << "yes" << endl;
  for(ll i = 1; i < n; i++) if(a[i] == 0 && a[i-1]) a[i] = a[i-1];
  for(ll i = n-1; i > 0; i--) if(a[i] == 0 && a[i+1]) a[i] = a[i+1];
  for(ll i = 0; i < n; ++i) cout << a[i] << " ";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
