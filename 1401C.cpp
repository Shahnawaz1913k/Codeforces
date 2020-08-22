#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i], b[i] = a[i];
    sort(a, a+n);
    for(ll i = 0; i < n; ++i) if(a[i]%a[0] && a[i] != b[i]){
        cout << "No" << endl; return;
    }
    cout << "Yes" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  ll t;cin>>t;while(t--)
  solve();
  return 0;
}